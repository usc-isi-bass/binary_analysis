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
	char a[1001],b[1001];
	int c[100]={0};
	int i,n=0,l1,l2;
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
			c[a[i]-'a']++;
		for(i=0;i<l2;i++)
			c[b[i]-'a']--;
		for(i=0;i<100;i++)
		{
			if(c[i]!=0)
			{
				printf("NO");
				n=1;
				break;
			}
		}
	    if(n==0)printf("YES");
	}
	else printf("NO");
	return 0;
}