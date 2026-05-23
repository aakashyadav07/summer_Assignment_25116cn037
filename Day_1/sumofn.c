#include <stdio.h>
int main() {
 int n , s=0;
   printf("ENTER A NUMBER n");
   scanf("%d", &n);
   for(int i =1;i<=n;i++){
      s=s+i;
   }
   printf("sum = %d",s);
   return 0;
}
