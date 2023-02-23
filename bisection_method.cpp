    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    
    class BisectionMethod{

      private:
      double f(double x){
        return x*x*x + x*x - 1;
      }

      public:
      double a, b;
      BisectionMethod(){
        srand(time(0));
          while(true){
            a = rand() % 10-6;
            b = rand() % 10;
            if(f(a) * f(b) < 0){
              int x = min(a,b);
              b = max(a,b);
              a = x;
              break;
            }
          }
        }
      
      void ab(){
        double pricision = 0.0001;
      double c = (a + b) / 2;
      cout<<"a = "<<a<<"   b = "<<b<<"   root = "<<c<<endl;
      double x = c;
          if(f(a) * f(c) > 0){
                    a = c;
                  }else{
                    b = c;
                  } 
              c =(a+b)/2; 
              cout<<"a = "<<a<<"   b = "<<b<<"   root = "<<c<<endl;
      while(true){
        if(c == 0.0) break;
         else if(f(a) * f(c) > 0){
          a = c;
        }else{
          b = c;
        }
        if(abs(c - x) <= pricision){} break;
        x = c;
        c = (a + b) / 2;
        cout<<"a = "<<a<<"   b = "<<b<<"   root = "<<c<<endl;
      }
      cout<<c<<endl;
      }
    };

    int main(){  
      BisectionMethod bsm;
      bsm.ab();
      return 0;
    }
