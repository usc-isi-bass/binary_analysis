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
int n,k,i,j,z,sum=0,x=0;
int sz[1000];
scanf("%d %d", &n,&k);
for(i=0; i<n; i++){
scanf("%d",&sz[i]);}
for(j=0;j<n-1; j++)
for(z=j+1;z<n; z++)
{
sum=sz[j]+sz[z];
if(sum==k)
{x++;}}
if (x==0) printf("no");
else if(x!=0)printf("yes");
return 0;
}


