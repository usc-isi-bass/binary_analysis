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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,temp,a[101];
	for(i=n-1;i>=0;i--){
		scanf("%d",&a[i]);}
	while(m--){
		
	temp=a[0];
	for(i=0;i<n-1;i++){
	a[i]=a[i+1];}
	a[n-1]=temp;}
	for(i=n-1;i>0;i--){
	printf("%d ",a[i]);}
	printf("%d\n",a[i]);
	return 0;
}