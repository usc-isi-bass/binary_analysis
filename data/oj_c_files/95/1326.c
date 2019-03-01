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
	char a[85],b[85];
	int i=0,k=0;
	gets(a);
	gets(b);
	while(a[i]!=0&&b[i]!=0)
	{
		if(a[i]>='a')a[i]=a[i]-'a'+'A';
		if(b[i]>='a')b[i]=b[i]-'a'+'A';
	    if(a[i]>b[i]){printf(">"); k=1;break;}
	    if(a[i]<b[i]){printf("<");k=1;break;}
		i++;
	} 
	if(k==0)printf("=");
	return 0;
}