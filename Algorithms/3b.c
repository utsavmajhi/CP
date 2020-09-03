
#include <stdio.h>
int calculateWeight(int r, int c){
if (r < 0){
 return 0;
}
   
if (c < 0 || c > r){
return 0;
}   
return ((calculateWeight(r - 1, c - 1)+200) + (calculateWeight(r - 1, c)+200)) / 2;
}

int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            printf("calculateweight(%d,%d)=%d\n",i,j,calculateWeight(i,j)-200);
        }
    }
}