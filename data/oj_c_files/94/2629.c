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
int i,max,e,k;
int sz[10000];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&sz[i]);}
for(k=1;k<=n;k++)
{max=0;
for(i=0;i<=n-k;i++)
{if(sz[i]>sz[max]) max=i;}
if(max!=n-k){
	e=sz[max];
	sz[max]=sz[n-k];
	sz[n-k]=e;}}
for(i=0;i<n;i++)
{if(sz[i]%2==1) {printf("%d",sz[i]);break;}}
for(i=i+1;i<n;i++)
{if(sz[i]%2==1) {printf(",%d",sz[i]);}}
return 0;}

