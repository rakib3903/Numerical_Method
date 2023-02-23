    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    
    class FalsePosition{

      private:
      double f(double x){
        return x*x*x + x*x - 1;
      }

      public:
      double a, b;
      FalsePosition(){
        srand(time(0));
          while(true){
            a = rand() % 10-9;
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
      double c = ((a * f(b)) - (b * f(a))) /(f(b) - f(a));
      cout<<"a = "<<a<<"   b = "<<b<<"   root = "<<c<<endl;
      double x = c;
          if(f(a) * f(c) > 0){
                    a = c;
                  }else{
                    b = c;
                  }
                  c = ((a * f(b)) - (b * f(a))) /(f(b) - f(a));
                  cout<<"a = "<<a<<"   b = "<<b<<"   root = "<<c<<endl;
      while(true){
        if(c == 0.0) break;
         else if(f(a) * f(c) > 0){
          a = c;
        }else{
          b = c;
        }
        if(abs(c - x) <= pricision) break;
        x = c;
        c = ((a * f(b)) - (b * f(a))) /(f(b) - f(a));
        cout<<"a = "<<a<<"   b = "<<b<<"   root = "<<c<<endl;
      }
      cout<<c<<endl;
      }
    };

    int main(){  
      FalsePosition fp;
      fp.ab();
      return 0;
    }
