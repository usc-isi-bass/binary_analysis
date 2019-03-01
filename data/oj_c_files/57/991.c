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


int main(){
	int n,len,i,k;
	char c[M];
	scanf("%d",&n);

	for(k=0;k<n+1;k++){
		gets(c);

	    len=strlen(c);
        if(c[len-2]=='e'){
			c[len-2]='\0';
			printf("%s\n",c);
		}else
        if(c[len-2]=='l'){
			c[len-2]='\0';
			printf("%s\n",c);
		}else
        if(c[len-3]=='i'){
			c[len-3]='\0';
			printf("%s\n",c);
		}
	}

	return 0;
}
