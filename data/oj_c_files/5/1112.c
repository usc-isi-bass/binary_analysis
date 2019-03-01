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

int main(){
	double b;
	int l1,l2,x=0;
	char d1[500],d2[500];
	scanf("%lf%s%s",&b,d1,d2);
	l1=strlen(d1);
	l2=strlen(d2);
	if(l1!=l2)
	{
		printf("error");
		return 0;
	}
	for(int i=0;i<l1;i++)
	{
		if(d1[i]!='A'&&d1[i]!='T'&&d1[i]!='C'&&d1[i]!='G')
		{
			printf("error");
		    return 0;
		}
		if(d2[i]!='A'&&d2[i]!='T'&&d2[i]!='C'&&d2[i]!='G')
		{
			printf("error");
		    return 0;
		}
		if(d1[i]==d2[i])
		{
			x++;
		}
	}
	if(1.0*x/l1>b){
		printf("yes");
	}else
	{
		printf("no");
	}
	return 0;
}
