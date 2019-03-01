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

void main()
{
       int i,j,m,n,a[5][5];
	   for(i=0;i<5;i++)
		   for(j=0;j<5;j++)
			   scanf("%d",&a[i][j]);
	   scanf("%d %d",&n,&m);
	   if(m>4||n>4) printf("error\n");
	   else
	   {
		   for(i=0;i<5;i++)
		   {
			   j=*(*(a+m)+i);*(*(a+m)+i)=*(*(a+n)+i);*(*(a+n)+i)=j;
		   }
		   for(i=0;i<5;i++)
		   {
			   for(j=0;j<4;j++)
			         printf("%d ",*(*(a+i)+j));
			   printf("%d\n",*(*(a+i)+4));
		   }
	   }
		   


}