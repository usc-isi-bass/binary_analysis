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

int ar(int n,int m);
void main()
{
	int a,b,t,A[5][5],i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&A[i][j]);
		}
	scanf("%d%d",&a,&b);
	if(ar(a,b)==1)
	{
        for(j=0;j<5;j++)
		{
			t=A[a][j];
            A[a][j]=A[b][j];
            A[b][j]=t;
		}
	    for(i=0;i<5;i++)
		{
		   for(j=0;j<5;j++)
		   {
			printf("%d",A[i][j]);
			if(j!=4)
			{
				printf(" ");
			}
		   }
		   printf("\n");
		}
	}
	else
		printf("error");
}
int ar(int n,int m)
{
	int c;
	if(n<5&&m<5)
		c=1;
	else
		c=0;
	return(c);
}