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

int m[1000][1000];
int main(){
int i,j,n,k=0,g,l,p,o;
scanf("%d",&n);
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
scanf("%d",&m[i][j]);
if(m[i][j]==0){
if(m[i-1][j]!=0&&m[i][j-1]!=0){
p=i;
o=j;}
	g=i;
	l=j;}
}}
printf("%d\n",(l-o-1)*(g-p-1));
return 0;
}
