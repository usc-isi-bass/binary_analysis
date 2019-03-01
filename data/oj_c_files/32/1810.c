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
	char str1[100],str2[100],str3[100];
	int a,b,i,j,n,c=1;

	scanf("%d",&n);
	while(c<=n)
	{
	scanf("%s",str1);
	scanf("%s",str2);
	a=strlen(str1);
	b=strlen(str2);

	for(i=a-1,j=b-1;i>=a-b;i--,j--)
	{
		if(str1[i]>=str2[j])
			str3[i]=str1[i]-str2[j]+'0';
		else
		{
			str3[i]=str1[i]-str2[j]+10+'0';
			str1[i-1]=str1[i-1]-1;
		}
	}

	for(i=a-b-1;i>=0;i--)
		str3[i]=str1[i];
    for(i=0;i<a;i++)
	{
		if(str3[i]!='0')
			break;
	}
	for(j=i;j<a;j++)
		printf("%c",str3[j]);
         printf("\n");
         c++;
	}
}

