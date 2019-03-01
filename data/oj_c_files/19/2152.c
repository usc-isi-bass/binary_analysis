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
	char zong[2000];//????
	char x[200],y[200],words[200][20];//???????
	int i,j=0,p=0,len;
	gets(zong);
	scanf("%s %s",x,y);
	len=strlen(zong);
	for(i=0;i<len;i++){
		if(zong[i]!=' '){
			words[j][p]=zong[i];
			p++;
		}else{
			words[j][p]=0;
			j++;
			p=0;
		}
	}
	words[j][p]=0;
	for(i=0;i<j;i++){
		if(strcmp(words[i],x)==0) {
			printf("%s ",y);
		}else {
			printf("%s ",words[i]);
		}
	}
	if(strcmp(words[j],x)==0) {
			printf("%s\n",y);
	}else {
			printf("%s\n",words[i]);
	}
	return 0;

		
}