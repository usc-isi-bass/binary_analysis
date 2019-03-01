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
	int n,l=0,i,a[1000];
	char s[1000][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",s[i]);
	for(i=0;i<n;i++)
		a[i]=strlen(s[i]);
	for(i=0;i<n;i++)
	{
		printf("%s",s[i]);
	   	l+=a[i]+1;
		if(i!=n-1 && l+a[i+1]<=80)printf(" ");
		else{
			l=0;
			printf("\n");
		}
	}
     return 0;
}



