
#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    char balls[n];
    for(int i=0;i<n;i++){
        scanf("%s",&balls[i]);
    }
    int rc=0;
    int pair=0;
    for(int j=0;j<n;j++){
        if(balls[j]=='R'){
            rc=rc+1;
        }else{
         pair=pair+rc;  
        }
    }
    printf("%ld",pair);


    return 0;
}
