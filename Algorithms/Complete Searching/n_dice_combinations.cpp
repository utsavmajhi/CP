#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <map>
#include<set>
using namespace std;

void dicerolls(int diceno,vector<int> &chosen){
    if(diceno==0){
        for(int i=0;i<chosen.size();i++){
            cout<<chosen[i]<<" ";
        }
        cout<<endl;
    }
    else{
    for(int i=1;i<=6;i++){
        chosen.push_back(i);
        dicerolls(diceno-1,chosen);
        chosen.pop_back();
    }
    }

}

int main(){
    cout<<"enter no of dices"<<endl;
    int dice;
    cin>>dice;
    vector<int> chosen;
    dicerolls(dice,chosen);
}