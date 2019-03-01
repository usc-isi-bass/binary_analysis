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

int num[1000][1000];
int main(){
	int k,i,j;
	scanf("%d", &k);
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
		    scanf("%d", &num[i][j]);
		}
	}
	int m,n,p,q,s,w;
	w=0;
	for(i=0;i<k&&w==0;i++)
	{
		for(j=0;j<k&&w==0;j++)
		{
			if(num[i][j]==0)
			{
				m=i;
				p=j;
				w=1;
			}
		}
	}
	n=0;
	q=0;
	for(i=m,j=p;j<k;j++)
	{
		if(num[i][j]==0)
		{
			n++;
		}
	}
	for(i=m,j=p;i<k;i++)
	{
		if(num[i][j]==0)
		{
			q++;
		}
	}
	s=(n-2)*(q-2);
	printf("%d", s);
	return 0;
}
