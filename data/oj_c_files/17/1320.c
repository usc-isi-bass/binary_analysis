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
	int n,i,j,k,flag;
	char a[200],b[200];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		memset(b,0,200);
		scanf("%s",a);
		for (j=0;j<strlen(a);j++)
		{
			if (a[j]=='(')
			{
				flag=1;
				k=j+1;
				while (flag!=0&&k<strlen(a))
				{
					if (a[k]=='(')
						flag++;
					if (a[k]==')')
						flag--;
					k++;
				}
				if (k>=strlen(a)&&flag!=0)
					b[j]='$';
				else 
				{
					b[k-1]=' ';
					b[j]=' ';
				}
			}
			else if (a[j]==')'&&b[j]!=' ')
				b[j]='?';
			else b[j]=' ';
		}
		printf("%s\n",a);
		printf("%s\n",b);
	}
	return 0;
}
