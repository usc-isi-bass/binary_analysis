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
	int i,c,d,j=1;
	double n,m,q=0;
    char a[501],b[501];
	scanf("%lf",&n);
	scanf("%s",a);
    scanf("%s",b);
	c=strlen(a);
	d=strlen(b);
	
	for(i=0;a[i];i++){
		if((a[i]!='T'&&a[i]!='A'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='G'&&b[i]!='T'&&b[i]!='C')||c!=d){
            printf("error");
			j=0;
		break;}}
	if(j==1){
	for(i=0;a[i];i++){
		if(a[i]==b[i]){
			m++;}}
	q=m/c;
	if(q>n){
		printf("yes");}
	else{
		printf("no");}}

			
return 0;
}