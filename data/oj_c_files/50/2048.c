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
	int a,i,j,s;
	int b[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	scanf("%d",&a);
	if(a==7) printf("%d\n",1);
	i=1;
	while(i<=11)
	{
		s=0;
		for(j=1;j<=i;j++)
		{s=s+b[j];}
		if((s+12)%7+a==5||(s+12)%7+a==12) printf("%d\n",i+1);
		i=i+1;
	}
	return 0;
}