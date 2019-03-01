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
	int n,a[100]={0},b[100],c[100],t=0,z;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d\n",&b[i],&c[i]);
		if(b[i]>=90&&b[i]<=140&&c[i]>=60&&c[i]<=90){
			a[t]++;}else{
				t++;}
	}
	for(int p=0;p<99;p++){
		if(a[p]>a[p+1]){
			z=a[p+1];
			a[p+1]=a[p];
			a[p]=z;}
	}
	printf("%d",a[99]);


	return 0;}