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
char a[51][50];
int i,c,b,d,e,q[50];
b=0;
c=100;
for(i=0;i<51;i++){
	scanf("%s",a[i]);
	if(a[i][0]>=65&&a[i][0]<=122){
	q[i]=strlen(a[i]);
    if(q[i]>b){b=q[i];d=i;}
	if(q[i]<c){c=q[i];e=i;}}
	else{break;}
}
	
printf("%s\n",a[d]);
printf("%s\n",a[e]);
return 0;
}

