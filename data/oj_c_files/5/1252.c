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
int k,i;
double m,ac,bc,n;
k=0;
m=0;
ac=0;
bc=0;
scanf("%lf\n",&n);
char a[501],b[501];
scanf("%s\n",a);
scanf("%s",b);
ac=strlen(a)-1;
bc=strlen(b)-1;
if(ac!=bc){
	k++;
	printf("error");
return 0;
}
else {
	for(i=0;a[i]!='\0';i++){
	if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')){
		k++;
		printf("error");
	break;}
    else{
		if(a[i]==b[i]){
		m++;}
	}
}
}
if(k==0){
	if(m/ac>=n){printf("yes");}
	else{printf("no");}
}

    return 0;
    } 
