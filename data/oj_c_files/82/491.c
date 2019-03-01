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
    int n,a,b,t,i,c;
	scanf("%d\n",&n);
	t=0;
	c=0;
	i=1;
	while(i<=n-1){
		scanf("%d%d\n",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			t++;
			if(c<t)
				c=t;
		}
		else
			t=0;
		i++;
	}
    scanf("%d%d",&a,&b);
	if(a>=90&&a<=140&&b>=60&&b<=90){
			t++;
			if(c<t)
				c=t;
	}
	printf("%d",c);
   return 0;
}