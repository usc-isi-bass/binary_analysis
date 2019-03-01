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
	long grapes[100000],k;//????
	long *pg=grapes;
	long n,i,j;

    scanf("%ld",&n);//??????
	for(i=0;i<n;i++)
		scanf("%ld",pg+i);
	scanf("%ld",&k);

	for(i=0;i<n;i++)//???k????
		if(k==*(pg+i))
		{
			if(k==*(pg+i+1))
			{
				for(j=i;j<n;j++)
					*(pg+j)=*(pg+j+2);
				n-=2;
			}
			else 
			{
				for(j=i;j<n;j++)
					*(pg+j)=*(pg+j+1);
				n--;
			}
			i--;
		}		
	
	printf("%ld",*pg);//????
	for(i=1;i<n;i++)
		printf(" %ld",*(pg+i));
}
