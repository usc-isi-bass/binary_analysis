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
	char a[100]={0},b[100]={0};
	gets(a);
	gets(b);
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i] >='a' && a[i]<='z') a[i]-=32;
		if(a[i]<32) a[i]=0;
	}
	
	for(i=0;b[i]!=0;i++)
	{
		if(b[i] >='a' && b[i]<='z') b[i]-=32;
		if(b[i]<32) b[i]=0;
	}
	
	if(strcmp(a,b)>0) printf(">");
	if(strcmp(a,b)<0) printf("<");
	if(strcmp(a,b)==0) printf("=");
	return 0;
}

