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

int same(char*p,char*q){
	int a,b;
		for(a=0;*(q+a)!='\0';){
			for(b=0;*(q+a+b)==*(p+b);b++)
			{
				if (*(p+b+1)=='\0')
				{
					return a;
				}
			}
			a++;
		}
		return 0;
}

int main(){
	char w[2000];//??
	char s[200];
	scanf("%s %s",s,w);
	printf("%d",same(s,w));
	return 0;
}
