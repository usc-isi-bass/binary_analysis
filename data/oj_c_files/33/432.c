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
	int n;
	scanf("%d",&n);
	char u[1000][260],v[1000][260],c[1000];
	int w[1000];
	gets(c);
	for(int i=0;i<=n-1;i++){
		gets(u[i]);
		w[i]=strlen(u[i]);
		}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=w[i]-1;j++){
			if(u[i][j]=='A'){
				v[i][j]='T';}
				if(u[i][j]=='T'){
				v[i][j]='A';}
				if(u[i][j]=='C'){
				v[i][j]='G';}
				if(u[i][j]=='G'){
				v[i][j]='C';}}
				printf("%s\n",v[i]);}
		scanf("%d",&n);
			return 0;}