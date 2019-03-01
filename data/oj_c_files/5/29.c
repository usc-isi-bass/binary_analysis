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
	double n;
	int count=0,i;
	char a[501],b[501];
	scanf("%lf%s%s",&n,a,b);
		if((int)strlen(a)!=(int)strlen(b))
		{
			printf("error");
		}
		else
		{
			for(i=0;i<(int)strlen(a);i++)
			{
				if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
				{
					printf("error");
					return 0;
				}
				else if(a[i]==b[i])
				{
					count++;
				}
			}
			if(1.0*count/(int)strlen(a)>=n)
				printf("yes");
			else{
				printf("no");
			}
		}



		return 0;
}