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
int n;int a[100000],b[100000]={0};
int i,j;
scanf("%d\n",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
		
	for(i=0;i<n;i++){
	 for(j=0;j<n;j++){
	if(b[i]==0){
	
	if(i!=j){
	
	
	if(a[i]==a[j]){
		b[j]=1;}
	}
	else
	continue;
	}}}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==0)
		{
		printf(" ");printf("%d",a[i]);}
		else
		continue;	
}
return 0;
}