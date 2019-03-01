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
	char a[5];
	scanf("%s",a);
	int l=strlen(a);
	char *p;
	
	p=(char*)malloc(l*sizeof(char));
		p=a;
	int i;
	for(i=1;i<=l/2;i++)
	{
		char b;
		b=*(p+i-1);
		*(p+i-1)=*(p+l-i);
		*(p+l-i)=b;
	}
	for(i=0;i<l;i++)
		printf("%c",*(p+i));
}
