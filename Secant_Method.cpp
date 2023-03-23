    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    double f(double x){
        return pow(x,2) - x - 2;
    }

    class Secant_Method{
        public:
        double a, b;
        Secant_Method(){
            srand(time(0));
            a = rand() % 10;
            b = rand() % 10;
            while(true){
                if(a != b){
                    break;
                }
            }
        }

        void ab(){
            double pricision = 0.001;
            double x;
            while(true){
                x = ((a * f(b)) - b * f(a))/(f(b) - f(a));
                cout<<"roots----> "<<a<<" "<<b<<" "<<x<<endl;
                if(abs((x - b)/x) < pricision) break;
                a = b;
                b = x;
            }
            cout<<x<<endl;
        }


    };

    int main(){  
      Secant_Method sm;
      sm.ab();
      double p = (double)22 / (double)7;
      cout<<p<<endl;
      return 0;
    }
