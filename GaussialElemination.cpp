    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    class GaussianElemination{
      public:
      double  matrix[1000][1000], b[1000];
      int n;
      GaussianElemination(){
        cin>>n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>matrix[i][j];
            }
        }
        for(int i = 0; i < n; i++) cin>>b[i];

        for(int k = 0; k < n-1; k++){
            double fact;
            for(int i = k + 1; i < n; i++){
                fact = matrix[i][k] / matrix[k][k];
                for(int j = 0; j < n; j++){
                    matrix[i][j] = matrix[i][j] - fact * matrix[k][j];
                }
                b[i] = b[i] - fact * b[k];         
            }
        }
      }

      void solve(){
        double a[n];
        a[n-1] = b[n-1] / matrix[n-1][n-1];
        for(int i = n-2; i >= 0; i--){
            double sum = b[i];
            for(int j = i + 1; j < n; j++){
                sum = sum - matrix[i][j] * a[j];
            }
            a[i] = sum / matrix[i][i];
        }

        for(int i = 0; i < n; i++) cout<<a[i]<<" ";
        cout<<endl;
      }

    };

    int main(){
      GaussianElemination bsm;
      bsm.solve();
      return 0;
    }
