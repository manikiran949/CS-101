/*
Given an array A[] containing n random numbers. Write a program to find the mean, variance,
and standard deviation of the given array.

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double mean(int a[],int n){
    double m=0;
    for(int i=0;i<n;i++){
        m+=a[i];
    }
    m/=n;
    return m;
}
double variance(int a[],int n,double mean){
    double v=0;
    for(int i=0;i<n;i++){
        v+=pow((a[i]-mean),2);
    }
    v/=n;
    return v;
}
double standarddeviation(double variance){
    return sqrt(variance);
}

int main(){
    int n;
    printf("Enter no.of elements : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%100;
    }
    double m=mean(a,n);
    double v=variance(a,n,m);
    double s=standarddeviation(v);
    printf("Mean = %lf\n",m);
    printf("Variance = %lf\n",v);
    printf("Standard deviation = %lf\n",s);
    return 0;
}
