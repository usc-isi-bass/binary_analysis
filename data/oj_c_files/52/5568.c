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


void play(int n[],int l);

int main()
{
	int n,m,i;
	int num[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=1;i<=m;i++)
	    play(num,n);
	for(i=0;i<n;i++)
	{
		if(i!=0)
			printf(" ");
		printf("%d",num[i]);
	}
	printf("\n");
	return 0;
}

void play(int n[],int l)
{
	int k,t;
	t=n[l-1];
	for(k=l-1;k>0;k--)
		n[k]=n[k-1];
	n[0]=t;
}