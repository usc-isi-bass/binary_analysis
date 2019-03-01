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

void paixu(char s[])
{
	int i,j,t,n;
	n=strlen(s);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(s[j]<s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
}
main()
{
	char a[100],b[100];
	int i,j,la,lb,k;
	scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
		paixu(a);
	   paixu(b);
	   k=strcmp(a,b);
	   if(k==0)
	   printf("YES");
	   else printf("NO");
	
}