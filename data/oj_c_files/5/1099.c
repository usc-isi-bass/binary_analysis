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
double m,n=0;
char a[500],b[500],*pa,*pb;
scanf("%lf%s%s",&m,a,b);
if(strlen(a)!=strlen(b)){
printf("error\n");
}
else{
for(pa=a,pb=b;*pa!='\0';pa++,pb++){
if(*pa==*pb){
n++;
}
}
n=n/strlen(a);
for(pa=a,pb=b;*pa!='\0';pa++,pb++){
if((*pa!='A'&&*pa!='T'&&*pa!='G'&&*pa!='C')||(*pb!='A'&&*pb!='T'&&*pb!='G'&&*pb!='C')){
printf("error\n");
break;
}
else if(*(pa+1)=='\0'&&n>m){
printf("yes\n");
}
else if(*(pa+1)=='\0'&&n<=m){
printf("no\n");
}
}
}
return 0;
}