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
char a[81]="",b[81]="";
gets(a);
gets(b);
int i;
for(i=0;i<80;i++){
	if(a[i]>=97&&a[i]<=121){
	a[i]=a[i]-32;
	}
if(b[i]>=97&&b[i]<=121){
	b[i]=b[i]-32;}
}


if(strcmp(a,b)<0){
printf("<");
}
if(strcmp(a,b)==0){
printf("=");
}
if(strcmp(a,b)>0){
printf(">");
}
return 0;
}
