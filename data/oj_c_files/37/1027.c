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
	char s[LEN],*p1,*p2;
	int n,i,ct,CT;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		CT=0;
		scanf("%s",s);
		p1=s;
		while(*p1!=0){
			ct=0;
			p2=s;
			while(*p2!=0){
				if(*p2==*p1){
					ct++;
				}
				p2++;
			}
			if(ct<2){
				printf("%c\n",*p1);
				CT++;
				break;
			}
			p1++;
		}
		if(CT<1)
			printf("no\n");
	}
	return 0;
}