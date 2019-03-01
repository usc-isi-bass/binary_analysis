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
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,j,k,t;
	int b,c,d;
		scanf("%d",&n);
	for(i=1;i<=n;i++) {
		k=0;
			 scanf("%d%d%d",&b,&c,&d);
			 if(c>d) {
                 j=c;
				 c=d;
				 d=j;
			 }
			 
			 for(j=c;j<d;j++) {
				 k=k+days[j];
				 if((j==2)&&(((b%4==0)&&(b%100!=0))||(b%400==0))) {
					 k++;
				 }
			 }
			 if(k%7==0) {
				 printf("YES\n");
			 }
			 else printf("NO\n");
			 }
	return 0;
}
