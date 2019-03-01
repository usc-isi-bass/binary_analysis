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
	
	char *p,*ip,a[1000];
	int flag=0,i,n;
    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(p=a+1;p<a+n;p++)
	{   flag=0;
		for(ip=p-1;ip>=a;ip--)
			if(*p==*ip){flag=1;break;}
		if(flag==0)printf(",%d",*p);
	}
}
	