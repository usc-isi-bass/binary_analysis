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
	int a,b,c,d,p,q,n,i;
	scanf("%d%d%d%d",&n,&a,&b,&c);
	if(a>b&&a>c&&b>c){
		p=a;
		q=b;
	}else if(a>b&&a>c&&c>b){
		p=a;
		q=c;
	}else if(b>a&&b>c&&a>c){
		p=b;
		q=a;
	}else if(b>a&&b>c&&c>a){
		p=b;
		q=c;
	}else if(c>a&&c>b&&a>b){
		p=c;
		q=a;
	}else if(c>a&&c>b&&b>a){
		p=c;
		q=b;
	}
	i=4;
	while(i<=n){
		scanf("%d",&d);
		if(d>p){
		    q=p;	
			p=d;
		}else if(d<p&&d>q){
			q=d;
		}
		i++;
	}
	printf("%d\n%d\n",p,q);
	return 0;
}
