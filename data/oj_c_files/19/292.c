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
	int m,n,i,j;
	char x[20],y[20],z[100][20];
	for(i=0;;i++)
	{
		scanf("%s",&z[i]);
		if(getchar()!=' ')
			goto hell;
	}
hell:;
	 scanf("%s",&x);
	 scanf("%s",&y);
	 for(j=0;j<=i;j++)
	 {
		 if (strcmp(x,z[j])==0)
		 {
			 z[j][0]=0;
		 }
	 }
	 for(j=0;j<=i;j++)
	 {
		 if(z[j][0]==0)
		 {
			 printf("%s",y);
		 }
		 else printf("%s",z[j]);
		 if (j!=i)
			 printf(" ");
	 }
}

          

	