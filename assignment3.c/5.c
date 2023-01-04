5>>>reverse the digit


#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,ans=0;
    printf("enter a number:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        int digit=temp%10;
        ans=ans*10+digit;
        temp=temp/10;
    }
    printf("the reversed digit is %d",ans);
    return 0;
}
