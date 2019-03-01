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
	char a[300],b[100],*p,*q;
	int i=0;
	scanf("%s %s",b,a);
	p=a;q=b;
	for(;p<a+strlen(a);p++){
		for(i=0;i<strlen(b);i++)
			if(*(p+i)!=*(q+i))
				break;
			if(i==strlen(b)){
				printf("%d",p-a);
				break;}
	}
}