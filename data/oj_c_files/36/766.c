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
	char a[1000],b[1000],e;
	int len1,len2,i,j;
	scanf("%s",&a);
	scanf("%s",&b);
	len1=strlen(a);
	len2=strlen(b);

	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(a[i]==b[j])
			{
				e=b[j];
				b[j]=b[i];
				b[i]=e;
				break;
			}
		}
	}
	if(strcmp(a,b)==0)
		printf("YES");
	else
		printf("NO");	
		return 0;
}