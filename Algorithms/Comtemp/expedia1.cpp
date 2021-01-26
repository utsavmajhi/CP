#include <iostream> 
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <forward_list>
using namespace std;

int main(){
 stack<char> s;
 string str;
 for(int i=0;i<str.length();i++){
     if(s.empty()){
         s.push(str[i]);
     }
 }
}