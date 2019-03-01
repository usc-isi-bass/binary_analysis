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
	char a[50][20],(*p)[20],*p1,*p2;
	int s=0;
	for(p=a;p<a+50;p++)
	{
		scanf("%s",*p);
		s++;
		if(getchar()=='\n')
			break;
	}
	p=a;
	p1=p2=*p;
	for(p=a+1;p<a+s;p++)
	{
		p1=strlen(*p)>strlen(p1)?*p:p1;
		p2=strlen(*p)<strlen(p2)?*p:p2;
	}
	printf("%s\n",p1);
	printf("%s",p2);
	return 0;
}



