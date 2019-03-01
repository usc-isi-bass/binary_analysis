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
	char *p,str[2100];
	int len,i,n;
	gets(str);
	len=strlen(str);
	for(i=0,p=&str[0],n=-1;i<len;i++,p++)
	{
		if(*p==' '&&i-n-1!=0)printf("%d,",i-n-1),n=i;
		if(*p==' '&&i-n-1==0)n=i;
		if(i==len-1)printf("%d",i-n);
	}
}