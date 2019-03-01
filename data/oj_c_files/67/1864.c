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
int n,z[100],h[100],i;
float u,t;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d %d",&z[i],&h[i]);
}
t=1.0*h[1]/z[1];
for(i=2;i<=n;i++){
   u=1.0*h[i]/z[i]-t;
   if(u>0.05){printf("better\n");}else
if(u<-0.05){printf("worse\n");}else{printf("same\n");}
   

}
return 0;
}