// question 1.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int m,n;
    printf("Enter no.of rows : ");
    scanf("%d",&m);
    printf("Enter no.of columns : ");
    scanf("%d",&n);
    int a[m][n],b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=rand()%100;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j]=rand()%100;
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=sqrt(abs(pow(a[i][j],2)-pow(b[i][j],2)));
        }
    }
    int mu=sum/(m*n);
    printf("The value of the constant mu is : %d\n",mu);
    printf("\nFirst matrix is : \n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n\n");
    }
    printf("\nSecond matrix is : \n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]/=mu;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j]/=mu;
        }
    }
    printf("\nNow first matrix becomes : \n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n\n");
    }
    printf("Now Second matrix becomes : \n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
