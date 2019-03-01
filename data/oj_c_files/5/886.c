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
int i,x,y,m=0,c=1;
double z,w;
char a[1000],b[1000];
scanf("%lf\n",&z);
scanf("%s\n%s",a,b);
x=strlen(a);
y=strlen(b);
if(x!=y){
  printf("error");c=0;
}
else{
for(i=0;i<x;i++){
if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){printf("error");c=0;break;}
else if(a[i]==b[i]){m++;
w=1.0*m/x;}
}}

if(c!=0){if(w>z)printf("yes");else printf("no");}

return 0;
}