    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    
    int fact(int n){
        int p = 1;
        for(int i = 1; i <= n; i++){
            p *= i;
        }
        return p;
    }

    double divid(int i, double v){
        double p = 1.0;
        for(int j = 0; j < i; j++){
            p *= (v + j);
        }
        return p;
    }

    class newtonForwardDifference{
      public:
      int n;
      double x1;
      double x[10000];
      double  y[1000][1000];

      newtonForwardDifference(){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>x[i];
        }
        for(int i = 0; i < n; i++){
            cin>>y[0][i];
        }
        for(int i = 1; i < n; i++){
            for(int j = i; j < n; j++){
                y[i][j] = y[i-1][j] - y[i-1][j-1];
            }
        }
      }

      double solve(){
        double ans = y[0][n-1];
        double u = (x1 - x[n-1]) / (x[n-1] - x[n-2]);
        for(int i = 1; i < n; i++){
            ans += (divid(i, u) * y[i][n-1]) / fact(i);
        }
        return ans;
      }
    };

    int main(){  
      newtonForwardDifference bsm;
      cout<<bsm.solve()<<endl;
      return 0;
    }
