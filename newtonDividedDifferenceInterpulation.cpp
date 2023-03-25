    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    int n;
    double x1;
    double x[10000];
    double  y[1000][1000];

    double divid(int i){
        double p = 1.0;
         p *= y[i][i];
        for(int j = 0; j < i; j++){
            p *= x1 - x[j];
        }
        return p;
    }

    class newtonDividedDifferenceInterpolation{
      public:
      newtonDividedDifferenceInterpolation(){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>x[i];
        }
        for(int i = 0; i < n; i++){
            cin>>y[0][i];
        }
        cin>>x1;

        for(int i = 1; i < n; i++){
            for(int j = i; j < n; j++){
                y[i][j] = (y[i-1][j] - y[i-1][j-1]) / (x[j] - x[j-i]);
            }
        }

      }

      double solve(){
        double ans = y[0][0];
        for(int i = 1; i < n; i++){
            ans += divid(i);
        }
        return ans;
      }
    };
//Newton's general interpolation formula with divided difference.
    int main(){
      newtonDividedDifferenceInterpolation bsm;
      cout<<bsm.solve()<<endl;
      return 0;
    }
