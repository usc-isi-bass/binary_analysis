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


int main(int argc, char* argv[])
{
	char s[LEN],a[5],*p;
	int n,i,ct;
	gets(a);
	n=atoi(a);
	for(i=0;i<n;i++){
		gets(s);
		ct=0;
		p=s;
		if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||*p=='_'){
			p++;
			while(*p!=0){
				if((*p>='0'&&*p<='9')||(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||*p=='_')
					p++;
				else{
					ct++;
					break;
				}
			}
		}else
			ct++;
		if(ct<1)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}