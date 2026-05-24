#include<stdio.h>
int main(){
   long long int n ,pro=1;
    printf("ENTER A NUMBER n \n");
    scanf("%lld",&n);
   while(n!=0){
        pro=pro*(n%10);
        n=n/10;
    }
    printf("product = %lld",pro);
    return 0;
}