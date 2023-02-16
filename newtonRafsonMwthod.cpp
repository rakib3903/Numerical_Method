    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    
    double f(double x){
        return x*x*x + x*x - 1;
      }

      double g(double x){
        return 3*x*x + 2*x;
      }

    class NuwtonRafson{

      public:
      double a;
      NuwtonRafson(){
        a = rand() % 10;
      }
      void ab(){
        double pricision = 0.001;
         a = a - (f(a)/g(a));
        double x = a;
        while(true){
          a = a - (f(a)/g(a));
          if(abs(a - x) <= pricision) break;
            x = a;
        }
        cout<<a<<endl;
      }
    };

    int main(){  
      NuwtonRafson nr;
      nr.ab();
      return 0;
    }
