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

void main()
{
	char a[300];
	int b[52]={0};
	int i,k,m,j=0;
	scanf("%s",a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		m=a[i];
		if(m>64&&m<91)
			b[m-65]++;
		else if(m>96&&m<123)
			b[m-71]++;
	}
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
		{
			j++;
			printf("%c=%d\n",i+65,b[i]);
		}
	}
	for(i=26;i<52;i++)
	{
		if(b[i]!=0)
		{
			j++;
			printf("%c=%d\n",i+71,b[i]);
		}
	}
	if(j==0) printf("No\n");
}
		 
