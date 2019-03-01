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
	int flag=0,a,b,c,d,e,f,S;
	do{
	scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	S=3600*(d-a+12)+60*(e-b)+(f-c);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		break;
	if(flag==0)
	{
		printf("%d",S);
		flag=1;
	}
	else
	{
		printf("\n%d",S);
	}
	}
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0);
return 0;
}