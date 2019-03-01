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
	char a[1000];
	int n=0,t,i=0;
	gets(a);
	while(a[i]!='\0')
	{
		t=0;
		while((a[i]==' ')&&(a[i]!='\0'))i+=1;
		while((a[i]!=' ')&&(a[i]!='\0')){t+=1;i+=1;}
		if(n>0)printf(",");
		if(t>0){printf("%d",t);n+=1;}
		if(a=='\0')break;
	}
}