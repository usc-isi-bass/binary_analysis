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
	int n,i;
	scanf("%d",&n);
	int y,a,b;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&y,&a,&b);
		if(y%400==0||(y%4==0&&y%100!=0))
		{
			if(a==12&&b==9||a==8&&b==2||a==7&&b==4||a==7&&b==1||a==4&&b==1||a==11&&b==3||b==12&&a==9||b==8&&a==2||b==7&&a==4||b==7&&a==1||b==4&&a==1||b==11&&a==3)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else
		{
			if(a==12&&b==9||a==10&&b==1||a==7&&b==4||a==11&&b==2||a==11&&b==3||a==3&&b==2||b==12&&a==9||b==10&&a==1||b==7&&a==4||b==11&&a==2||b==11&&a==3||b==3&&a==2)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}
	return 0;
}
