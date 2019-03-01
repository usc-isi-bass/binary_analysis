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
int sz[100000],n,i,k,max;

scanf("%d",&n);

for(i=0;i<n;i++)
{
	scanf("%d",&sz[i]);
}

scanf("%d",&k);

if(n==1){
	max=0;}
else{

for(i=0;i<(n-1);i++){

	if(sz[i]!=k&&sz[i+1]==k){
		max=i;}
	else if(sz[i+1]!=k){
		max=i+1;}
}
}

for(i=0;i<n;i++)
{
	if(sz[i]!=k&&i!=max)
	{
		printf("%d ",sz[i]);
	}
	else if(sz[i]!=k&&i==max)
	{
		printf("%d",sz[i]);
	}
}

return 0;

}