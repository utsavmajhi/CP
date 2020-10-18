#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;
int main()

{

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

 

    ll n,k;

    cin>>n>>k;

    for(int i=1; i<=n; i++)

    {

        cin>>A[i];

    }

    ll start=1; // starting point given in statement 

    ll l,r;

    while(1)

    {

        if(vis[start]==1) // this city is revisited 

        {

            l=start; // this city is the start point of our patter

            break; // no need to go any more

        }

        vis[start]=1; 

        start=A[start]; // jumping to the next city

        k--;  // k th jump made

        if(k==0)  // in case we used all jump this the kth city

        {

            cout<<start<<endl;

                return 0;

        }

    }

    ll cnt=0;

    for(int i=l;;) // making pattern

    {

        if(i==l&&cnt!=0) // if it is revisited then patter is done , cnt=0 is 

            break;       // for revisiting check 

        v.push_back(i);  // making the pattern 

        i=A[i];  // jumping 

        cnt++;  

    }

    ll d=v.size(); // pattern size

    cout<<v[k%d]<<endl; // after remaining k th jump

    return 0;

}

 
