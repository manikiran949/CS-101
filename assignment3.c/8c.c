8c>>>


#include <stdio.h>
#include <stdlib.h>
int main(){
    double n;
    double ans=0;
    printf("enter the value of n:");
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        ans=ans+(1/pow(2,i));
    }
    printf("the sum is:%lf",ans);
    return 0;
}

