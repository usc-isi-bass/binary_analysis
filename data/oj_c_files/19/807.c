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
	int i,n,m;
	char *p1,*p2,*p3,*p,*s;
    p1=(char*)malloc(1000*sizeof(char));
	gets(p1);
    p2=(char*)malloc(100*sizeof(char));
	p3=(char*)malloc(100*sizeof(char));
	p=(char*)malloc(100*sizeof(char));
	gets(p2);
	gets(p3);
    n=strlen(p1);
	s=p1;
	    sscanf(s,"%s",p);
		m=strlen(p);
		if(strcmp(p2,p)==0)
		{printf("%s",p3);}
		else {printf("%s",p);}
        s=s+m+1;
	for(i=n-m-1;i>=0;i=i-m-1)
	{
		sscanf(s,"%s",p);
		m=strlen(p);
		if(strcmp(p2,p)==0)
		{printf(" %s",p3);}
		else {printf(" %s",p);}
        s=s+m+1;
	}
}