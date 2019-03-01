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

int main(){
	int n,m,i,j,k;
	int p[100001];
    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	scanf("%d",&m);
	for(j=0;j<n;j++)
	{
		if(p[j]!=m)
		{
			printf("%d",p[j]);
			break;
		}
	}
	for(k=(j+1);k<n;k++)
	{
		if(p[k]!=m)
			printf(" %d",p[k]);
	}

	return 0;
}