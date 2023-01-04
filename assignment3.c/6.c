6>>> fibonacci series

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=-1;
    int b=1;
    int i=0,n;
    printf("enter the value of nth term:");
    scanf("%d",&n);
    while(i<=n/2){
        a=a+b;
        b=a+b;
        printf("%d %d ",a,b);
        i++;
    }
    return 0;
}
