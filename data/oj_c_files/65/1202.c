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
int n,i,c;
c=0;
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){c=c+1;}
else if(a[i]==b[i]){c=c;}
else if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)){c=c-1;}}
if(c>0){printf("A");}
else if(c==0){printf("Tie");}
else if(c<0){printf("B");}
return 0;
}
