    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    
    double x1;
    double x[10000];
    double  y[1000];
    int n;

    double diterminator(int i){
        double p = 1;
        p *= y[i];
        for(int j = 0; j < n; j++){
           if(i != j){
            p *= x1 - x[j];
           }
        }
        return p;
    }

    double dinominator(int i){
        double p = 1;
        for(int j = 0; j < n; j++){
            if(i != j){
                p *= x[i] - x[j];
            }
        }
        return p;
    }

    class LagrangeInterpolation{
      public:
      LagrangeInterpolation(){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>x[i];
        }
        for(int i = 0; i < n; i++){
            cin>>y[i];
        }
        cin>>x1;
      }

      double solve(){
        double ans = 0;
        for(int i = 0; i < n; i++){
            double a = diterminator(i);
            double b = dinominator(i);
            ans += a / b;
        }
        return ans;
      }
    };

    int main(){  
      LagrangeInterpolation bsm;
      cout<<bsm.solve()<<endl;
      return 0;
    }
