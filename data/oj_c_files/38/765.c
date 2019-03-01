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
int n,i,k,m;
double sz[1000],a1=0,a,s1=0,s,s2;
scanf("%d\n",&m);
for(k=0;k<m;k++){
scanf("%d\n",&n);
a1=0;
s1=0;
s2=0;
for(i=0;i<n;i++){
scanf("%lf\n",&(sz[i]));
}
for(i=0;i<n;i++){
	a1+=sz[i];
}
a=a1/n;
for(i=0;i<n;i++){
	s1+=(sz[i]-a)*(sz[i]-a);
}
s2=s1/n;
s=sqrt(s2);
printf("%.5lf\n",s);
}
return 0;
}
