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
	int c,d,i;
	double q,p,e=0;
	scanf("%lf",&p);
	char a[501],b[501];
	scanf("%s",a);
	scanf("%s",b);
	c=strlen(a);
	d=strlen(b);
	if(c!=d)
		printf("error");
	else{
		for(i=0;i<d;i++){
			if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
			{
				printf("error");
				break;
			}
			else if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
				printf("error");
			    break;
			}
			else if(a[i]==b[i])
				e++;
		}
		if(i==d){
			q=e/d;
			if(q>=p)
				printf("yes");
			else
				printf("no");
		}
	}
	return 0;
}