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
	char a[101],b[101];
	int c[1000];
	int i,num=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
		num=num+1;
	}
	for(i=0;i<num;i++)
	{
		if(i+1==num)
			b[i]=c[0]+c[i];
		else b[i]=c[i]+c[i+1];
			printf("%c",b[i]);
	}
	return 0;


}