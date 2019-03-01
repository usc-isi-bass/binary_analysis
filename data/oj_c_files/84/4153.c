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
	int s[100000],i,j,k,t,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%d",&s[i]);
	for (i=10;i>=2;i--)
	 if			(s[i]>s[i-1])		
	 {
			t=s[i-1];
			s[i-1]=s[i];
			s[i]=t;
	 }
	for (i=10;i>=3;i--)
		if (s[i]>s[i-1])
		{
			t=s[i-1];
			s[i-1]=s[i];
			s[i]=t;
		}
		printf("%d\n",s[1]);printf("%d\n",s[2]);
		return 0;
}
		 




