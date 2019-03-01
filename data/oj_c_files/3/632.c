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

int main(int argc, char* argv[])
{
	int n,k,i,j;
	int sz[1000];
	int tag=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&sz[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
			if(sz[i]+sz[j]==k)
				tag=1;
	}
	if(tag)
		printf("yes");
	else 
		printf("no");
	return 0;
}