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
	int  i, flag=0, deadend=0;
	double x;
	char a[501], b[501];
	scanf("%lf\n", &x);
	scanf("%s\n", &a);
	scanf("%s\n", &b);
	for(i=0;i<strlen(a);i++)
	{
		if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='G')&&(a[i]!='C'))
		{
			printf("error");
			deadend=1;
			break;
		}
	}
	if((strlen(a)==strlen(b))&&(deadend==0))
	{
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[i])
				flag++;
		}
		if((100*flag/(strlen(a)))<(100*x))
			printf("no");
		else
			printf("yes");
	}
	else if((strlen(a)!=strlen(b))&&(deadend==0))
		printf("error");
	return 0;
}