    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    class LeastSquareCurveFitting{
      public:
      int n;
      double sumX = 0, sumY = 0, sumXSqure = 0, sumXY = 0;
      double x[10000];
      double  y[1000];

      LeastSquareCurveFitting(){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>x[i];
            sumX += x[i];
            sumXSqure += pow(x[i], 2);
        }
        
        for(int i = 0; i < n; i++){
            cin>>y[i];
            sumY += y[i];
            sumXY += x[i] * y[i];
        }
      }

      void solve(){
        double a_0, a_1;
        a_1 = (sumX * sumY - (n * sumXY)) / (pow(sumX, 2) - (n * sumXSqure));
        a_0 = (sumY - (a_1 * sumX)) / n;
        cout<<a_0 <<" "<<a_1<<endl;
      }

    };

    int main(){  
      LeastSquareCurveFitting bsm;
      bsm.solve();
      return 0;
    }
