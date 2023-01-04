8b>>>


#include <stdio.h>
#include <stdlib.h>
int main(){
    double x;
    double n;
    double ans=0;
    printf("enter the value of x:");
    scanf("%lf",&x);
    printf("enter the value of n:");
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        ans=ans+(1/pow(x,i));
    }
    printf("the sum is:%lf",ans);
    return 0;
}
