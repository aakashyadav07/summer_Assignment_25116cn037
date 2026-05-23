#include<stdio.h>
int main(){
    int n ,f=1;
    printf("ENTER A NUMBER n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    printf("FACTORIAL = %d",f);
    return 0;
}