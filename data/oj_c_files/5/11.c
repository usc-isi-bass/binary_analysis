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
	char a[501],b[501];
	int l1,l2,n,i,j,k,num=0,f=0;
	double s,p;
	scanf("%lf",&s);
	scanf("%s",a);
	scanf("%s",b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2){
	printf("error");
	f=1;
	return 0;}
	else{
		for(i=0;i<l1;i++){
			if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
	printf("error");
	f=1;
		return 0;}}
	for(i=0;i<l2;i++){
			if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
	printf("error");
	f=1;
	return 0;}}
	if(f==0){	for(i=0;i<l1;i++){
	if(a[i]==b[i]) num++;}
	}
	if(f==0) { 
	p=(double)num/l1;
	if(p>s) printf("yes");
	else printf("no");}}
	



	return 0;
}

	