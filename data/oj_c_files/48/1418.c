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

void main(){
int m,n,i,j,k,c;
int a[9][9]={0};
scanf("%d",&m);
scanf("%d",&n);
a[4][4]=m;
for(i=1;i<=n;i++){
	int b[9][9]={0};
	for(j=1;j<8;j++){
		for(k=1;k<8;k++){
			c=a[j][k];
			b[j][k]+=2*c;
			b[j-1][k-1]+=c;
			b[j-1][k]+=c;
			b[j-1][k+1]+=c;
			b[j][k-1]+=c;
			b[j][k+1]+=c;
			b[j+1][k-1]+=c;
			b[j+1][k]+=c;
			b[j+1][k+1]+=c;}}
	for(j=0;j<9;j++){
		for(k=0;k<9;k++)
			a[j][k]=b[j][k];}}
for(j=0;j<9;j++){
		for(k=0;k<8;k++)
printf("%d ",a[j][k]);
printf("%d\n",a[j][8]);}
}