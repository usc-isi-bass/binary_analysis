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
	int n,i,s[100]={0},j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);
	printf("%d",s[0]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)if(s[i]==s[j])break;
		if(j==i)printf(",%d",s[i]);
	}
	printf("\n");
}
