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
int s=0,i,x,y,e=0;
double r;
char a[500],b[500];
scanf("%lf",&r);
scanf("%s%s",a,b);
x=strlen(a);
y=strlen(b);
if(x!=y){printf("error");}
else{
    for(i=0;i<x;i++){
     if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){e=e+1;}  
     else{if(a[i]==b[i]){s=s+1;}}
    }
if(e!=0){printf("error");}
else{
if(1.0*s/x>r){printf("yes");}
else printf("no");}}
return 0;
}



