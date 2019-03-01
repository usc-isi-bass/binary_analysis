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
	double x,z=0,n=0,m=0;
	int y=0;
	int i;
	char a[501],b[501];
	scanf("%lf",&x);
         scanf("%s\n%s",a,b);
	for(i=0;a[i];i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
			y++;
		}
	}for(i=0;b[i];i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
			y++;
		}
	}for(i=0;a[i];i++){
		n++;
	}for(i=0;b[i];i++){
		m++;
	}if(m!=n){
		y++;
	}if(y!=0){
		printf("error");
	}else{
		for(i=0;a[i];i++){
			if(a[i]==b[i]){
				z++;
			}
		}if(z/n>x){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}


