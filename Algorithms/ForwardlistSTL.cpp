#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <map>
#include<set>
#include <forward_list>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6};
    forward_list<int> f_list={1,2,3,4,5,1,1,1,6,4,4,4,10,11,3,3,3,3,3};
    //f_list.remove(3);
    auto itr=f_list.begin();
    f_list.remove(3);
    while(itr!=f_list.end()){
        cout<<*itr<<" ";
        ++itr;
        
        
    }
}