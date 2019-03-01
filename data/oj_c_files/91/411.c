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



int relative(int *a,int len,int i);

void main()
{
	char s[MAX];
	int a[MAX];
	int len,i;

	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
		*(a+i)=*(s+i);
	for(i=0;i<len;i++)
		printf("%c",relative(a,len,i));
	putchar('\n');
}

int relative(int *a,int len,int i)
{
	int result;
	int *p;
	if(i<len-1){
		p=a+i;
		result=*p+*(p+1);
		return result;
	}
	else{
		p=a+i;
		result=*p+*a;
		return result;
	}
}