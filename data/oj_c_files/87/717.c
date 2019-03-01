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
int s1,f1,m1,s2,f2,m2,n=0;
for(int i=0;i<1;i--){
scanf("%d%d%d%d%d%d",&s1,&f1,&m1,&s2,&f2,&m2);
if(s1==0&&f1==0&&m1==0)break;
n=3600-f1*60-m1;
n+=(s2+12-s1-1)*3600+f2*60+m2;
printf("%d\n",n);





}

return 0;
}