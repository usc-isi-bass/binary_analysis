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
   int a[ROW][COL];
   int row,col,n;
   int b=0,c;
   scanf("%d",&n);
   for(row=0;row<n;row++)
   {
	   for(col=0;col<n;col++)
	   {
		   scanf("%d",&a[row][col]);}
   }
for(row=0;row<n;row++)
   {
	   for(col=0;col<n;col++)
	   {
		   if(a[row][col]==0)
		   b++;
}
}
c=(b-4)*(b-4)/16;
printf("%d",c);
return 0;
		   }
