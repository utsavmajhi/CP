

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include<map>
using namespace std;
    struct topic{
        long long int diffz;
        long long int topicid;
        long long int newz;
    };


    bool isgrt(topic t1,topic t2){
            if(t1.diffz==t2.diffz){
                return t1.topicid>t2.topicid;
            }
            return t1.diffz>t2.diffz;
    }
int main(){


    long long int n;
    cin>>n;
    vector<topic> v;
    while(n--){
       long long int p,l,c,s;
       long long  int topicid;
        long long int oldz;
        cin>>topicid>>oldz>>p>>l>>c>>s;
        long long int newz=p*50+l*5+c*10+s*20;
       long  int diffz=newz-oldz;
        struct topic t1={diffz,topicid,newz};
        v.push_back(t1);
    }
    sort(v.begin(),v.end(),isgrt);

    // stable_sort(v.begin(),v.end(),isGreater);
    for(int i=0;i<5;i++){

        cout<<v[i].topicid<<" "<<v[i].newz<<endl;
    }


}