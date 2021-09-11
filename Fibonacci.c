/*
-- ============================================================================
-- Module Name		:	fibonacci
-- Project Name		:	
-- Target Devices	:	
-- Tool versions	:	
-- Description		:	my restart project
-- ----------------------------------------------------------------------------
-- Create Date		:	2021-09-11 22:23:59
-- Engineer			:	
-- Company			:	Null
-- ----------------------------------------------------------------------------
-- Revision		Date					Coding_by		Comment
-- v0.0.1		2021-09-11 22:23:59		young		File Created
-- ============================================================================
-- Additional Comments
*/

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



