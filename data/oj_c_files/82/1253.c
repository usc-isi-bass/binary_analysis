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
	int n,i,max,l,r,s[100]={0},z=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&l,&r);
		if(l>=90&&l<=140&&r>=60&&r<=90){
			s[z]++;
		}else{
			z++;
		}
	}
	if(l>=90&&l<=140&&r>=60&&r<=90){
		z++;
	}
	for(i=0;i<z;i++){
		if(i==0||max<s[i]){
			max=s[i];
		}
	}
	printf("%d",max);
	return 0;
}