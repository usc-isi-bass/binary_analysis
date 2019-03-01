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
	int a[6]={1},n,i,shijian;
	while(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0||a[4]!=0||a[5]!=0){
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0||a[4]!=0||a[5]!=0)
	{
		 shijian=3600*(12+a[3]-a[0])+(a[4]-a[1])*60+a[5]-a[2];
	}
	else break;
	printf("%d\n",shijian);
	}
	return 0;
}