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
	int n,i,j,len,o[1000],*po;
	char m[1000][81],*pm[1000];
	scanf("%d",&n);
	po=o;
	for(i=0;i<n+1;i++){
		pm[i]=m[i];
		gets(pm[i]);
	}
	for(i=1;i<n+1;i++){
		len=strlen(pm[i]);
		if(*pm[i]>='0'&&*pm[i]<='9'){
			*(po+i)=0;
		}
		else{
			for(j=0;j<len;j++){
				if(*(pm[i]+j)==' '||*(pm[i]+j)=='.'||*(pm[i]+j)=='+'||*(pm[i]+j)=='-'||*(pm[i]+j)=='@'||*(pm[i]+j)=='='){
					o[i]=0;
					break;
				}
				else{
					*(po+i)=1;
				}
			}
		}
	}
	for(i=1;i<n+1;i++){
		printf("%d\n",*(po+i));
	}
	return 0;
}
			




