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
	int n,a,i,p,q,t;
    char r[2000],s[2001];
	s[0]=' ';s[1]='\0';
	gets(r);strcat(s,r);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' '&&s[i+1]!=' ') p=i+1;
		if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0')) {q=i;a=q-p+1;printf("%d",a);break;}
	}
	for(i=i+1;s[i]!='\0';i++)
	{
       if(s[i]==' '&&s[i+1]!=' ') p=i+1;
		if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0')) {q=i;a=q-p+1;printf(",%d",a);}
	}
	return 0;
}
