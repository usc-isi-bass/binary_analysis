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
int i,n;
int a,b;
int aa,bb;
scanf("%d",&n);
aa=bb=0;
for(i=0;i<n;i++){
scanf("%d%d",&a,&b);
a=(a-b+3)%3;
if(a==2)aa++;
else if(a==1)bb++;
}
if(aa<bb)printf("B");
else if(aa>bb)printf("A");
else printf("Tie");
return 0;
}