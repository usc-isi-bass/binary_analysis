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
	int a[200], b[200], i, r=0, n;
	scanf("%d", &n);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d%d", &a[i], &b[i]);
	}
	for(i=0;i<=(n-1);i++)
	{
		if(((a[i]==0)&&(b[i]==1))||((a[i]==1)&&(b[i]==2))||((a[i]==2)&&(b[i]==0)))
		{	
			r++;
		}
		else if(((b[i]==0)&&(a[i]==1))||((b[i]==1)&&(a[i]==2))||((b[i]==2)&&(a[i]==0)))
		{
			r--;
		}
	}
	if(r>0)
	{	
		printf("A");
	}
	else if(r<0)
	{	
		printf("B");
	}
	else if(r==0)
	{
		printf("Tie");
	}
	return 0;
}
