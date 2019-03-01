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
	char a[100];
int n,i;
char *p;
scanf("%d",&n);
getchar();
for(i=0;i<n;i++)
{   

	
	
	gets(a);
	p=a+strlen(a)-1;
	if(*p=='r'){for(p=a;p<a+strlen(a)-2;p++)printf("%c",*p);}
	else if(*p=='y'){for(p=a;p<a+strlen(a)-2;p++)printf("%c",*p);}
	else if(*p=='g'){for(p=a;p<a+strlen(a)-3;p++)printf("%c",*p);}
	printf("\n");
}
return 0;
}
