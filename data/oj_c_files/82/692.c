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
int n,i,c=0,d[100],a,b,max=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a,&b);
if(a>=90&&a<=140&&b>=60&&b<=90){
c++;
d[i]=c;
}else{
d[i]=c;
c=0;
}
}
for(i=0;i<n;i++){
if(max<d[i]){max=d[i];}
}
printf("%d",max);
return 0;
}