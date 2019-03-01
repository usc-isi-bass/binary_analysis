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
	int n;
	char s[100001];
	scanf("%d",&n);
	gets(s);

	int i;
	char *p;
	for(i=0;i<n;i++){
		gets(s);
		int l;
		l=strlen(s);
		int count[26]={0};
		p=s;
		while(*p!='\0'){
			count[(int)*p-97]++;
			p++;
		}
		p=s;
		while(*p!='\0'){
			if(1==count[(int)*p-97]){
				printf("%c\n",*p);
				break;
			}
			p++;
		}
		if(*p=='\0'){
			printf("no\n");
		}
	}


	return 0;
}
