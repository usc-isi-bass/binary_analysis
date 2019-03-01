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
	char str[500],a,b;
	int i,j,len,t,p;
	gets(str);
	len=strlen(str);
	a=str[0];
	b=str[len-1];
	t=2;
	while(t==2){
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(str[j]==a)break;
			if(str[j]==b){
				printf("%d %d\n",i,j);
				str[i]='$';
				str[j]='$';
				t=1;
				p=j;
				break;
			}
		}
		if(p==len-1){t=0;break;}
		if(t==1){t=2;break;}
	}
	}
	return 0;
}
