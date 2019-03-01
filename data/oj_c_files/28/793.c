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
	int s=0,i,n;
	char *p;
	char a[10000];
	p=a;
	gets(p);
	n=strlen(p);
	for(i=0;i<n;i++)
	{
		if((*(p+i)!=' ')&&(*(p+i)!='\0'))s=s+1;
		if((*(p+i)==' ')&&(*(p+i)!='\0')){if(s>0)printf("%d,",s);s=0;}
		if(*(p+i)=='\0')break;
	}
	printf("%d",s);
}