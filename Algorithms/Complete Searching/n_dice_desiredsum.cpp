#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <map>
#include<set>
using namespace std;

void dicerolls(int diceno,vector<int> &chosen,int desiredsum){
    if(diceno==0){
        int sum=0;
        for(int i=0;i<chosen.size();i++){
            sum=sum+chosen[i];
        }
        if(sum==desiredsum){
            for(int i=0;i<chosen.size();i++){
                cout<<chosen[i]<<" ";
            }
            cout<<endl;
        }
    }
    else{
    for(int i=1;i<=6;i++){
        chosen.push_back(i);
        dicerolls(diceno-1,chosen,desiredsum);
        chosen.pop_back();
    }
    }

}

int main(){
    cout<<"enter no of dices"<<endl;
    int dice;
    cin>>dice;
    cout<<"Enter the desired sum"<<endl;
    int desiredsum;
    cin>>desiredsum;
    vector<int> chosen;
    dicerolls(dice,chosen,desiredsum);
}