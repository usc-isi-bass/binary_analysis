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


int main(int argc, char* argv[])
{
	int n,plow,phigh,k,i,m;
	scanf("%d",&n);
	for(i=1,k=0,m=0;i<=n;i++){
	scanf("%d %d",&phigh,&plow);
	if((plow>=60)&&(plow<=90)&&(phigh>=90)&&(phigh<=140)){
	k++;}
	else{
		if(k>m){
	m=k;
	k=0;
	}
		else{
	k=0;}
	}}
	if(k>m){
		m=k;}
	printf("%d",m);
	return 0;
}