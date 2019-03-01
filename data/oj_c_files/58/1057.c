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
	char sign[81];
	char *p;
	int n;
	int i;
	int count=0;

	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(sign);

		p=sign;
		if(*p=='_'||*p>='A'&&*p<='Z'||*p>='a'&&*p<='z'){
		p++;
		count++;

		for(;;p++){
			if(*p=='\0'){
				break;
			}
			if(*p=='_'||(*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')||*p>='0'&&*p<='9'){
				count++;
			}
		}
		if(count==strlen(sign)){
			printf("1\n");
		}else{
			printf("0\n");
		}
		}else{
		printf("0\n");
		}
		count=0;
	}

	return 0;
}