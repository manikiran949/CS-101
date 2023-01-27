// 4th question.
/*

Given two array X[2][n] and Y [2][n] containing random numbers, i.e., 2 rows and n columns.
Write a program to solve the given equation.

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int x[2][n],y[2][n];
    for(int i=0;i<n;i++){
        x[2][i]=rand()%100;
    }
    for(int i=0;i<n;i++){
        y[2][i]=rand()%100;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=sqrt(abs((x[1][i]-x[0][i])*(x[1][i]-x[0][i])-(y[1][i]-y[0][i])*(y[1][i]-y[0][i])));
    }
    int c=sum/n;
    printf("Result is : %d\n",c);
    return 0;
}
