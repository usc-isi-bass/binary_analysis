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

int main (){
	int a[10003]={0};
int n,i,x,y,j,q,m,t;
scanf ("%d",&n);
t=1;
for (j=0;j<1;j++){
scanf ("%d %d",&x,&y);
m=y;
q=x;
for (i=x;i<=y;i++){
a[i]=1;
}
}
for (j=1;j<n;j++){
scanf ("%d %d",&x,&y);
if (y>=m) {m=y;}
if (x<=q) {q=x;}
if (x!=y){
for (i=x;i<y;i++){
a[i]=1;
}
}
else {for (i=x;i<x+1;i++){
a[i]=1;
}}
}
for (i=q;i<m;i++){
	if (a[i]==0){
	printf ("no");
	t=0;
	break;
	}
}
if (t==1){printf ("%d %d",q,m);}
return 0;
}