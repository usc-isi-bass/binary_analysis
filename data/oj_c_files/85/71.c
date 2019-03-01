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
	int n,i,m,j,k=1,l=0;
	char c[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
		m=strlen(c);
		for(j=0;j<m;j++)
		{
			if((((c[j]>='0')&&(c[j]<='9'))||((c[j]>='a')&&(c[j]<='z'))||((c[j]>='A')&&(c[j]<='Z'))||(c[j]=='_'))&&(((c[0]>='a')&&(c[0]<='z'))||((c[0]>='A')&&(c[0]<='Z'))||(c[0]=='_')))
				continue;
			else
			{
				k=0;
				break;
			}
		}  
		if(k==1)
		{
			if(l==0)
			{
				printf("yes");
				l=1;
			}
			else
			printf("\nyes");
		}
		else
		{
			if(l==0)
			{
				printf("no");
				l=1;
			}
			else
			printf("\nno");
		}
		k=1;
	}
	return 0;
}
