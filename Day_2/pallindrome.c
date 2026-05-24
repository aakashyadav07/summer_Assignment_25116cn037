#include<stdio.h>
int main(){
    int n ,rev=0;
    printf("ENTER A NUMBER n \n");
    scanf("%d",&n);
    int x=rev;

   while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(x==rev){
        printf("PALINDROME");
    }
    else{
        printf("NOT A PALINDROME");
    }
    return 0;
}