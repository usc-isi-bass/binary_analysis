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
int m,i,a,b,j,temp;
int sz[10000];

double sum=0;
double c;
scanf("%d",&m);
for(i=1;i<=m;i++){
	scanf("%d",&sz[i]);
	sum=0;
a=2;
	b=1;
for(j=1;j<=sz[i];j++){
	
	c=1.0*a/b;
	temp=a+b;
	sum=sum+c;
    b=a;
	a=temp;
}
printf("%.3lf\n",sum);}
 return 0;
}