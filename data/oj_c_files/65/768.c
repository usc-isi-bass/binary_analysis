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

int main()
{
int n,i,g,j;
int a[200],b[200];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
}
g=0;
for(j=0;j<n;j++){
	if((a[j]-b[j]==-1)||(a[j]-b[j]==2)){
	g+=1;
	}
	else{
		if(a[j]-b[j]==0){
		g=g;
		}
		else{g+=-1;}
	}
}
if(g>0){
printf("A");
}
if(g==0){
printf("Tie");
}
if(g<0){
printf("B");
}
return 0;
}