#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{   
   int n,a,B,C,D,E,F,G,H,I,J,K,L;
   scanf("%d",&n);
   a=(13+n-1)%7;
   if(a==5)
	   printf("1\n");
   B=(31+13+n-1)%7;	
   if(B==5)
	   printf("2\n");
   C=(31+28+13+n-1)%7;
   if(C==5)
	   printf("3\n");
   D=(31+28+31+13+n-1)%7;
   if(D==5)
	   printf("4\n");
   E=(31+28+31+30+13+n-1)%7;
   if(E==5)
	   printf("5\n");
   F=(31+28+31+30+31+13+n-1)%7;
   if(F==5)
	   printf("6\n");
   G=(31+28+31+30+31+30+13+n-1)%7;
   if(G==5)
	   printf("7\n");
   H=(31+28+31+30+31+30+31+13+n-1)%7;
   if(H==5)
	   printf("8\n");
   I=(31+28+31+30+31+30+31+31+13+n-1)%7;
   if(I==5)
	   printf("9\n");
   J=(31+28+31+30+31+30+31+31+30+13+n-1)%7;
   if(J==5)
	   printf("10\n");
   K=(31+28+31+30+31+30+31+31+30+31+13+n-1)%7;
   if(K==5)
	   printf("11\n");
   L=(31+28+31+30+31+30+31+31+30+31+30+13+n-1)%7;
   if(L==5)
	   printf("12\n");
   return 0;
}
