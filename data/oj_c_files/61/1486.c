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
int k,n,s=0;
int a=1,b=1;
scanf("%d",&k);
for(int q=1;q<=k;q++){
 scanf("%d",&n);
 if(n==1||n==2){
  s=1;
}
else{
	for(int w=1;w<n-1;w++){
	s=a+b;
	a=b;
	b=s;
	}
}
printf("%d\n",s);
s=0;
a=1;
b=1;
}
return 0;
}
