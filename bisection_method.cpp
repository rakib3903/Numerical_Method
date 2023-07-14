    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    double f(double x){
        return pow(x,3) +  pow(x, 2) - 1;
    }

    class Biosection{
        public:
        double a, b;
        Biosection(){
            srand(time(0));
            while(true){
                a = rand() % 10-9;
                b = rand() % 10;
                if(f(a) * f(b) < 0){
                    int x = min(a, b);
                    b = max(a, b);
                    a = x;
                    break;
                }
            }
        }

        void ab(){
            double pricision = 0.001;
            double root  = (a + b) / 2;
            cout<<"first = "<<a<<"  second = "<<b<<"  root = "<<root<<endl;
            double x = root;

            while(true){
                if(f(a) * f(root) == 0) break;
                else if(f(a) * f(root) > 0) a = root;
                else b = root;
                root  = (a + b) / 2;
                if(abs((root - x) / root) < pricision) break;
                x = root;
                cout<<"first = "<<a<<"  second = "<<b<<"  root = "<<root<<endl;
            }
            cout<<root<<endl;
        }
    };

    int main(){  
      Biosection bs = Biosection();
      bs.ab();
      return 0;
    }
