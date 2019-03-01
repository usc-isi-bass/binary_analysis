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
	int k;
	char a[100],b[100],*p1,*p2,*p3,temp;
	p1=a;p2=b;p3=b;
	scanf("%s%s",p1,p2);
	if (strlen(a)!=strlen(b)) printf("NO");
	else for (;*p1!='\0';p1++)
	{
		k=0;
		for (;*p2!='\0';p2++)
			if (*p2==*p1)
			{
				temp=*p2;*p2=*p3;*p3=temp;
				p3++;
				p2=p3;
				k=1;
				break;
			}
		if (k==0)
		{
			printf("NO\n");
			break;
		}
	}
	if (k==1) printf("YES\n");
}