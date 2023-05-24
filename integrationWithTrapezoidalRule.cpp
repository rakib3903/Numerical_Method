    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    double fnction(double p){
        p = 1 / (1 + p);
        return p;
    }   

    class integrationWithTrapezoidal{
      public:
      int it;
      double  y[1000], h;
      integrationWithTrapezoidal(){
        it = 0;
        double low, high;
        cin>>low>>high>>h;
        for(double i = low; i <= high; i = i + h){
            double p = fnction(i);
            y[it] = p;
            it++;
        }
      }

      double solve(){
        double ans = 0;
        for(int i = 1; i <it-1; i++){
            ans += (2 * y[i]);
        }

        ans += y[0] + y[it - 1]; 
        ans = (ans * h) / 2;
        return ans; 
      }

    };

    int main(){  
      integrationWithTrapezoidal bsm;
      cout<<bsm.solve()<<endl;
      return 0;
    }
