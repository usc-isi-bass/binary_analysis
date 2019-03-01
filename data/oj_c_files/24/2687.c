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
	int max(int a[],int n);
	int min(int a[],int n);
	char s[200][50];
	int n,i,j,b[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
		b[i]=strlen(s[i]);
	}
	for(i=0;i<n;i++){
		if(b[i]==max(b,n)){
			printf("%s\n",s[i]);
			break;
		}
	}
	for(i=0;i<n;i++){
		if(b[i]==min(b,n)){
			printf("%s\n",s[i]);
			break;
		}
	}
	return 0;
}

int max(int a[],int n){
	int t=a[0],i;
	for(i=0;i<n;i++){
		if(t<a[i]) t=a[i];
	}
	return t;
}

int min(int a[],int n){
	int t=a[0],i;
	for(i=0;i<n;i++){
		if(t>a[i]) t=a[i];
	}
	return t;
}