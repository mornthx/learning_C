#include <stdio.h>
#include <time.h>

long Fib_rec(int n){
   if(n == 0 || n == 1)
      return 1;
   else
      return (Fib_rec(n-1) + Fib_rec(n-2));
}

void main(){
   clock_t us1,us2;
   int n;
   printf("input n: \n");
   scanf("%d",&n);
   us1 = clock();
   printf("fib_%ld : %d\n",n,Fib_rec(n));
   us2 = clock();
   printf("%ld",us2-us1);
}



