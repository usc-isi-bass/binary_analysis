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
	char a[300]={0};
	int i,j,m=0,b[53]={0};
	scanf("%s",a);
	for(i=65;i<91;i++)
	{	for(j=0;j<300;j++)
			if(a[j]==i) b[i-65]++;
			if(b[i-65]!=0) {printf("%c=%d\n",i,b[i-65]);m++;}
	}
	for(i=97;i<123;i++)		
	{	for(j=0;j<300;j++)
			if(a[j]==i) b[i-71]++;
			if(b[i-71]!=0) {printf("%c=%d\n",i,b[i-71]);m++;}
	}
	if(m==0) printf("No");
}
