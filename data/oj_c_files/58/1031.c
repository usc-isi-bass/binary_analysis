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
	int n,i,l,count;
	char sz[81];
	scanf("%d",&n);
	getchar();
	char *p;
	for(i=1;i<=n;i++){
		gets(sz);
		l=strlen(sz);
		p=sz;
		count=0;
		if((*p>='a' && *p<='z' )|| (*p>='A' && *p<='Z') || *p=='_'){
			for(p=sz+1;p<(sz+l);p++){
				if((*p>='a' && *p<='z') || (*p>='A' && *p<='Z') || *p=='_'||(*p>='0'&& *p<='9')){
					
				}else{
					count++;
				}
			}
		}else{
			count++;
		}
		if(count==0){
			printf("1\n");
		}else{
			printf("0\n");
		}
	}
		return 0;
}