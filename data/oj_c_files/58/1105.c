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

void main()
{
	int n,i,result=0;
	char c;

	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		c=getchar();
		if(!(c=='_'||isalpha(c))){
			printf("%d\n",result);
			while(getchar()!='\n');
			continue;
		}

		while(1){
			if(!(c=='_'||isalnum(c))){
				result=0;
				while(getchar()!='\n');
				break;
			}
			else result=1;
			if((c=getchar())=='\n') break;
		}
		printf("%d\n",result);
		result=0;
	}
}