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


int judge(char *,int );

int main()
{
	char str[100],*p=str,nc[2];

	int n,i;

	gets(nc);

	n=atoi(nc);

	for(i=0;i<n;i++){
		gets(p);

		
	
	    printf("%d\n",judge(p,strlen(p)));
	}
	
	return 0;
}

int judge(char *a,int x){
	if(*a=='_'||(*a<='z'&&*a>='a')||(*a<='Z'&&*a>='A')){
		int i;
		for(i=1;i<x;i++){
			if(*(a+i)!='_'&&!(*(a+i)<='z'&&*(a+i)>='a')&&!(*(a+i)<='Z'&&*(a+i)>='A')&&!(*(a+i)>='0'&&*(a+i)<='9'))
				return 0;
		}
		return 1;
	
	}

		
		
	else
		return 0;
}