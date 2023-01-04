8a>>>


#include <stdio.h>
#include <stdlib.h>
int main(){
    double ans=0;
    double n;
    printf("enter the value of n:");
    scanf("%lf",&n);
    for(double i=1;i<=n;i++){
        ans=ans+1/i;
    }
    printf("the sum is:%lf",ans);
    return 0;
}
