#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int s,q,i,counter;
    counter=0;
    cin>>s;
    string strings[s];
    for(i=0;i<s;i++){
        cin>>strings[i];
    }
    cin >>q;
    string queries[q];
    for(i=0;i<q;i++){
        cin>>queries[i];
    }

    for(i=0;i<q;i++){
        for(int j=0;j<s;j++){
            if(queries[i]==strings[j]){
                counter++;
            } 
               
        }
        cout<<counter<<"\n";
        counter=0;
    }

    return 0;

}
