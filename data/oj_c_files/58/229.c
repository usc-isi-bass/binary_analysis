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
	char sz[81];
	int i,n,judge;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		judge=0;
		if(i==0){
			getchar();
		}
		gets(sz);

		char *p;

		for(p=sz;p<sz+strlen(sz);p++){
			if(p==sz){
				if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')||*p=='_'){
					judge=1;
				}else{
					break;
				}
			}else{
				if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')||(*p>='0'&&*p<='9')||*p=='_'){
					judge=1;
				}else{
					judge=0;
					break;
				}
			}
		}
	
	printf("%d\n",judge);

	}

	return 0;
}

