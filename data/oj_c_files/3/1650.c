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
	int n,k;
	scanf("%d%d",&n,&k);
	int sz[1000];
	int i;
	for(i=0;i<n;i+=1)
	{scanf("%d",&(sz[i]));							}
for(int l=0;l<=n-1;l+=1)
{for(i=1;i<n;i+=1){if(sz[l]+sz[i]==k)
{printf("yes");return 0;}}
if(l==n-1){printf("no");}											}
													
	
	
	
	
	
	return 0;
	}