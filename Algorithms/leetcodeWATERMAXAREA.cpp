

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include<map>
using namespace std;

int main() {

  vector<int> height={1,8,6,2,5,4,8,3,7};
  int low=0;
        int high=height.size()-1;
        int maxa=INT32_MIN;
        int minh=INT32_MAX;
        while(low<high)
        {
			cout<<low<<" "<<high<<endl;
            maxa=max(maxa,abs(low-high)*min(height[low],height[high]));
            if(low>high){
                high--;
            }
            else{
                low++;
            }
        }
        cout<<maxa;
}
