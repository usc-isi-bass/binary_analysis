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
	char sz[81],*p;
	int n,i,m,right;
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++){
		gets(sz);
		m=strlen(sz);
		p=sz;
		right=0;
		if(*p=='_'||(*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')){
			for(p=sz;p<sz+m;p++){
				if(*p=='_'||(*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')||(*p>='0'&&*p<='9')){
					right++;
				}
			}
			if(right==m){
				printf("1\n");
			}else{
				printf("0\n");
			}
		}else printf("0\n");
	}
	return 0;
}
