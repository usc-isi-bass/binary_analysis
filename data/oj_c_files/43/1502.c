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

main()
{
	int m;
	scanf("%d",&m);
	if (m==6)
	printf("3 3");
	else if (m==8)
	printf("3 5");
	else
	{
		int a=3;
		for (;a<=m/2;a=a+2)
	{
	if (sushu(a)==1&&sushu(m-a)==1)
	printf("%d %d\n",a,m-a);
	}
	}
}

int sushu(int num)
{
int b=2;
for(;b<sqrt(num)+1;b++)
{
if (num%b==0)
break;
}
if(b>=sqrt(num)+1)
return 1;
else return 0;
}
