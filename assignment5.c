// >>1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void solution(char arr[],char arr1[],int n,int m){
    char res[100];
    strcat(arr,arr1);
    int flag[100];
    for(int x=0;x<100;x++){
        for(int i=0;i<50;i++)flag[i]=0;
        char to_print[100];
        for(int i=0;i<n+m;i++){
            int it = rand()%(n+m-i);
            int cnt = 0;
            for(int j=0;j<n+m;j++){
                if(cnt==it && !flag[j]){
                    to_print[i] = arr[j];
                    it++;
                    flag[j]=1;
                    break;
                }
                if(!flag[j])cnt++;
            }
        }
        printf("%s\n",to_print);
    }
    printf("%s",arr);
}
int main(){
   char arr[]="raj";
   char arr1[]="roy";
   int n=strlen(arr);
   int m=strlen(arr1);
   int lenght=m+n;
   char res[lenght];
   solution(arr, arr1, n, m);
   return 0;
}

//>>2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i, x;
    char str[100];
   printf("\nPlease enter a string:\t");
   gets(str);
   for(i = 0; (i < 100 && str[i] != '\0'); i++){
        str[i] = str[i] + 3;
   }
   printf("\nEncrypted string: %s\n", str);

   for(i = 0; (i < 100 && str[i] != '\0'); i++){
        str[i] = str[i] - 3;
   }
   printf("\nDecrypted string: %s\n", str);
   return 0;
}

//3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char str[],int s,int e){
    while(s<e){
        char temp=str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
}
void printarray(char str[],int n){
    for(int i=0;i<n;i++){
        printf("%c",str[i]);
    }
}
void reverse_word(char str[],int n){
    int low=0;
    int high=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            reverse(str,low,high);
            low=high=i+1;
        }
        else{
            high=i;
        }
    }
    reverse(str,low,high);
    reverse(str,0,n-1);
}
int main(){
    char str[]="raj roy";
    int n=sizeof(str)/sizeof(str[0]);
    printf("given sentence:\n");
    printarray(str,n);
    reverse_word(str,n);
    printf("\nthe reversed sentence is:\n");
    printarray(str,n);
    return 0;
}


//>>4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isvalid(char raj[]){
    int n=strlen(raj);
    int count=0;
    for(int i=0;i<n;i++){
        if(raj[i]=='.'){
            count++;
        }
    }
    for(int i=0;i<n;i++){
            if(raj[i]=='e'&&raj[i-1]=='.'){
                return 0;
                break;
            }

    }
    if(count>1||raj[n-1]=='.'){
        return 0;
    }
    return 1;

}
int main()
{
    char raj[]="1.";
    if(isvalid(raj)==1){
        printf("Valid");
    }
    else{
        printf("Invalid");

    }
}

//>>5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isValid (char s[])
{
    int length=strlen(s), ind1=0, ind2=0, ind3=0;
    if ( (s[0]<'a') || (s[0]>'z') ) return 0;
    else
    {
    for (int i=1;i<length;i++)
    {
        if (s[i]=='@')
        {
            ind1=i+1;
            break;
        }
        else
            if ( (s[i]<'a') || (s[i]>'z') ) return 0;
    }
    for (int j=ind1;j<length;j++)
    {
        if (s[j]=='.')
        {
            ind2=j+1;
            break;
        }
        else
            if ( (s[j]<'a') || (s[j]>'z') ) return 0;
    }
    for (int k=ind2;k<length;k++)
    {
        if (s[k]=='.')
        {
            ind3=k+1;
            break;
        }
        else
            if ( (s[k]<'a') || (s[k]>'z') ) return 0;
    }
    }
    if (s[ind3] == 'i' && s[ind3+1] == 'l') return 1;
    else return 0;
}
int main(){
    char str[100];
    printf("please enter the email address:");
    scanf("%s",&str);
    if(isValid(str)==1){
        printf("valid email address");
    }
    else{
        printf("not a valid email address");
    }
   return 0;
}

//>>6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isvalid(char str[]){
    int lc=0,uc=0,sc=0,dc=0;
    int n=strlen(str);
    if(n<10){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(isupper(str[i])){
            uc++;
        }
        if(islower(str[i])){
            lc++;
        }
        if(isdigit(str[i])){
            dc++;
        }
        if(ispunct(str[i])){
            sc++;
        }
    }
    if(uc<2||lc<2||dc<2||sc<2){
            return 0;
    }
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(str[i]==str[j]){
                    return 0;
                }
            }
    }
    return 1;
}
int main(){
    char str[100];
    printf("please enter the password:");
    scanf("%s",&str);
    if(isvalid(str)==1){
        printf("valid password");
    }
    else{
        printf("not a valid password");
    }
   return 0;
}
