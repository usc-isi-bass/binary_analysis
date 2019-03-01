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
int n,i,A,B;
int a[100],b[100];
scanf("%d",&n);
A=0;
B=0;
for(i=1;i<=n;i++){
scanf("%d%d",&a[i],&b[i]);
}
for(i=1;i<=n;i++){
if(a[i]-b[i]==1||b[i]-a[i]==2){
B=B+1;
}
	  else if(b[i]-a[i]==1||a[i]-b[i]==2){
     A=A+1;
	  }
}
if(A>B){
	printf("A\n");
}
else if(A==B){
	printf("Tie\n");
}
else{
	printf("B\n");
}
	return 0;
}