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
	 int i,j,k=0,m=0,n;
	char *p,(*q)[100];
	p=(char *)malloc(100*sizeof(char));
	q=(char (*)[100])malloc(100*100*sizeof(char));
    
	for (i=0;i<100;i++)
	{
		scanf ("%c",p+i);
	}
	for (j=0;*(p+j)!='\0';j++)
	{
		if (*(p+j)!=' '&&*(p+j-1)!=' ')
		{
			*(*(q+k)+m)=*(p+j);
			m++;
		}
		if (*(p+j)!=' '&&*(p+j-1)==' ')
		{
			*(*(q+k)+m)='\0';
			k++;
			m=0;
                           *(*(q+k)+m)=*(p+j);
                           m++;

		}
	}
	for (n=0;n<=k;n++)
	{
		printf ("%s ",*(q+n));
	}
}
