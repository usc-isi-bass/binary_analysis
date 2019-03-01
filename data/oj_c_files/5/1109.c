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

int main (){
	int i,k;
	double c,s;
	char m,n;
	char a[501];
	char b[501];
	s=0.0;
	scanf("%lf%c%s%c%s",&c,&m,a,&n,b);
	if(strlen(a)!=strlen(b)){printf("error");return 0;}
	else
	{k=strlen(a);
		for(i=0;i<k;i++)
		{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		{printf("error");return 0;}
		if(a[i]==b[i]){s++;}
		}
	if(s*1.0/strlen(a)>=c)
	{printf("yes");}
	else
	{printf("no");}
	return 0;
	}

    
}
