    #include <iostream>
    #include <string>
    #include <algorithm>
    #include <vector>
    #include <stack>
    #include <queue>
    using namespace std; 
    void solve(){
        long long int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        long long int c,d;
        long long int minmul=INT64_MAX;
        //for(int i=0;i<n;i++){
            long long int difa=a-x;
            long long  int difb=b-y;
            if(difa<=n&&((b-(n-difa)))>=y){
                minmul=min(minmul,(a-difa)*(b-(n-difa)));
            }
            if(difa<=n && (n-difa)>=difb){
                 minmul=min(minmul,(a-difa)*y);
            }
            if(difa>=n){
                minmul=min(minmul,(a-n)*b);
            }
            if(difb<=n&&(a-(n-difb))>=x){
                minmul=min(minmul,(a-(n-difb))*(b-difb));
            }
            if(difb<=n && (n-difb)>=difa){
                 minmul=min(minmul,x*(b-difb));
            }
            if(difb>=n){
                minmul=min(minmul,a*(b-n));
            }

        cout<<minmul<<endl;
    }

    int main(){

        int t;
        cin>>t;
        while(t--){
            solve();
        }



    }