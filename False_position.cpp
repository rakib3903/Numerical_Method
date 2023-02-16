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
        for(int i = -9; i <= 9; i++){
          for(int j = -9; j<=9; j++){
            if(f(i) * f(j) < 0){
              a = min(i,j);
              b = max(i, j);
            }
          }
        }
      }
      void ab(){
        double pricision = 0.0001;
      double c = ((a * f(b)) - (b * f(a))) /(f(b) - f(a));
      double x = c;
          if(f(a) * f(c) > 0){
                    a = c;
                  }else{
                    b = c;
                  }
                  c = ((a * f(b)) - (b * f(a))) /(f(b) - f(a));
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
      }
      cout<<c<<endl;
      }
    };

    int main(){  
      FalsePosition fp;
      fp.ab();
      return 0;
    }
