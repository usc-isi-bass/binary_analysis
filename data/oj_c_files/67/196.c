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
int n,s[1000],z[1000],i,j;
double a[1000];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&s[i],&z[i]);
a[i]=100.0*z[i]/s[i];
}
for(j=1;j<n;j++){
if(a[j]-a[0]+5>10)
printf("better\n");
 else if (a[j]-a[0]+5<0){
printf("worse\n");
}
else 
printf("same\n");
}
return 0;
}



