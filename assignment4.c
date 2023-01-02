// >>1
#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr1[100], n,ctr=0;
    int i, j, k;
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}

//>>2
#include <stdio.h>
#include <stdlib.h>
int largest(int arr[],int n){
    int cmax;
    for(int i=0;i<n;i++){
        cmax=arr[0];
        if(arr[i]>cmax){
            cmax=arr[i];
        }
    }
    return cmax;
}
int smallest(int arr[],int n){
    int csmall;
    for(int i=0;i<n;i++){
        csmall=arr[0];
        if(arr[i]<csmall){
            csmall=arr[i];
        }
    }
    return csmall;
}
int main(){
    int arr[]={1,2,3,4,5};
    //to find size of array
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the largest element in array is:%d",largest(arr,n));
    printf("\n");
    printf("the smallest element int the array is:%d",smallest(arr,n));
    return 0;
}

// >>3

#include <stdio.h>
#include <stdlib.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[],int n,int s,int e){
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
void right_rotate(int arr[],int n,int k){
    if(k==0){
        return;
    }
    k=k%n;
    reverse(arr,n,n-k,n-1);
    reverse(arr,n,0,n-1-k);
    reverse(arr,n,0,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int k;
    printf("enter the value of k:");
    scanf("%d",&k);
    //to find size of array
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the right rotated array is:\n");
    right_rotate(arr,n,k);
    printarray(arr,n);
    return 0;
}

// >>4

#include <stdio.h>
#include <stdlib.h>
long fibonacci(int num){
    long a=0,b=1,c=0;
    if(num<=1){
        return num;
    }
    for(int i=2;i<=num;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int num;
    printf("enter the value of num:");
    scanf("%d",&num);
    printf("the %dth fibonacci number is:%ld",num,fibonacci(num));
    return 0;
}

//>>5

#include <stdio.h>
#include <stdlib.h>
int missing_number(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int x=n+1;
    int sum1=(x*(x+1))/2;
    int ans=sum1-sum;
    return ans;
}
int main(){
    int arr[]={1,3,4,5};
    //from above input array we know 2 is missing;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the missing number is:%d",missing_number(arr,n));
    return 0;
}

//>>6

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int armstrong(int n){
   int temp=n;
   int ans=0;
   while(temp!=0){
        int digit=temp%10;
        ans=ans+pow(digit,3);
        temp=temp/10;
   }
   if(ans==n){
        return 1;
   }
   else{
        return 0;
   }
}
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(armstrong(n)==1){
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}

//>>7

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double sum(int arr1[],int arr2[],int n){
    double sum;
    double ans;
    for(int i=0;i<n;i++){
        int x=pow(arr1[i],2);
        int y=pow(arr2[i],2);
        int z=x+y;
        double raj=pow(z,0.5);
        sum=sum+raj;
    }
    return sum/n;
}
int main(){
    int arr1[]={1,2,3};
    int arr2[]={2,3,4};
    //if you want to add more element to the array please change the double data type to long double(in function sum above) or similar;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    printf("the sum is:%lf",sum(arr1,arr2,n));
    return 0;
}

//>>8

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double sum(int arr1[],int arr2[],int n){
    double sum;
    double ans;
    int z;
    for(int i=0;i<n;i++){
        int x=arr1[i];
        int y=arr2[i];
        if(x-y>0){
           z=x-y;
        }
        else{
            z=y-x;
        }
        double raj=pow(z,0.5);
        sum=sum+raj;
    }
    return sum/n;
}
int main(){
    int arr1[]={1,2,5};
    int arr2[]={2,3,2};
    //if you want to add more element to the array please change the double data type to long double(in function sum above) or similar;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    printf("the sum is:%lf",sum(arr1,arr2,n));
    return 0;
}

