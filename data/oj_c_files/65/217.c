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
int n,a,b,i,m=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a,&b);
if(a==b) m=m;
else if(b-a==1 || a-b==2) m=m+1;
else m=m-1; 
}
if(m==0)printf("Tie");
else if(m>0)printf("A");
else if(m<0)printf("B");
return 0;
}