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


main()
{
	int n,i;
	char a[101],b[101],*pa,*pb;
	gets(a);
	pa=a;
	pb=b;
	for(i=0;i<strlen(a)-1;i++){
		*(pb+i)=*(pa+i)+*(pa+i+1);
	}
	*(pb+strlen(a)-1)=*(pa+strlen(a)-1)+*pa;
	for(i=0;i<strlen(a);i++){
		printf("%c",*(pb+i));
	}
}