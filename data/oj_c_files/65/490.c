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
int n,a,b,c=0,d=0;
scanf("%d",&n);
while(n--){
scanf("%d %d",&a,&b);
if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){c++;}
if(a==b){c++;
d++;}
if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){d++;}
}
if(c>d)printf("A");
if(c<d)printf("B");
if(c==d)printf("Tie");
	return 0;
}
