#include<stdio.h>
int main(){
   long long int n ,count=0;
    printf("ENTER A NUMBER n \n");
    scanf("%lld",&n);
   
   while(n!=0){

        n=n/10;
        count++;
    }

    printf("COUNT = %lld",count);
    return 0;
}