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
int n,i,m,b=0,c=0;
char a[100000];
char *p,*q;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s",a);
	m=strlen(a);
	for(p=a;p<a+m;p++){
		for(q=a;q<a+m;q++){
			if((*p)==(*q)&&p!=q){
				b=1;
				break;
			}	
		}
		if(b==0){
			printf("%c\n",*p);
			c=1;
			break;
		}
		b=0;
	}
	if(c==0){
		printf("no\n");
	}
	c=0;
	
}
return 0;
}




