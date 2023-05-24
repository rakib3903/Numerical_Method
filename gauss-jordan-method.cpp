    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    class GaussJordan{
      public:
      double  matrix[1000][1000], b[1000];
      int n;
      GaussJordan(){
        cin>>n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>matrix[i][j];
            }
        }
        for(int i = 0; i < n; i++) cin>>b[i];

        for(int k = 0; k < n; k++){
            double m = matrix[k][k];
            for(int i = 0; i < n; i++){
                matrix[k][i] = matrix[k][i] / m;
            }
            b[k] = b[k] / m;

            for(int i = 0; i < n; i++){
                if(i != k){
                    double fact;
                    fact = matrix[i][k] / matrix[k][k];
                    for(int j = 0; j < n; j++){
                        matrix[i][j] = matrix[i][j] - fact * matrix[k][j];
                    }
                    b[i] = b[i] - fact * b[k];
                }         
            }
            cout<<endl;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
            for(int i = 0; i < n; i++) cout<<b[i]<<" ";
                cout<<endl<<endl;
        }
    }

    

    };

    int main(){
      GaussJordan bsm;
      return 0;
    }
