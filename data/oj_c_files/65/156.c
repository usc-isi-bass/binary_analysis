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
int n,i,x,y,f=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&x,&y);
if(x-y==1)
f=f-1;
else if(y-x==1)
f=f+1;
else if(x-y==2)
f=f+1;
else if(y-x==2)
f=f-1;
}
if(f>0)
printf("A");
else if(f<0)
printf("B");
else if(f==0)
printf("Tie");
return 0;
}