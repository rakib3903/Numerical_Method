    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    double fnction(double p){
        p = 1 / (1 + p);
        return p;
    }   

    class integrationWithSimpon1_3Rule{
      public:
      int it;
      double  y[1000], h;
      integrationWithSimpon1_3Rule(){
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
            if(i % 2 != 0) ans += (4 * y[i]);
            else ans += (2 * y[i]);
        }

        ans += y[0] + y[it - 1]; 
        ans = (ans * h) / 3;
        return ans; 
      }

    };

    int main(){  
      integrationWithSimpon1_3Rule bsm;
      cout<<bsm.solve()<<endl;
      return 0;
    }
