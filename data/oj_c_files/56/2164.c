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


void main()
{
int n;
int a[5]={0,0,0,0,0};
scanf("%d",&n);
if((n-10000)>0){
a[0]=n-(n/10*10);
a[1]=n/10-(n/100*10);
a[2]=n/100-(n/1000*10);
a[3]=n/1000-(n/10000*10);
a[4]=n/10000;
printf("%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
}
else if((n-1000)>0){
a[0]=n-(n/10*10);
a[1]=n/10-(n/100*10);
a[2]=n/100-(n/1000*10);
a[3]=n/1000;
printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
}
else if((n-100)>0){
a[0]=n-(n/10*10);
a[1]=n/10-(n/100*10);
a[2]=n/100;
printf("%d%d%d",a[0],a[1],a[2]);
}
else if((n-10)>0){
a[0]=n-(n/10*10);
a[1]=n/10;
printf("%d%d",a[0],a[1]);
}
else if((n-10)<0){
a[0]=n;
printf("%d",a[0]);
}



}

