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
int num[500];
int n;
int k=0;
int t=0;
int e;
int sz[500];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&num[i]);

if((num[i])%2!=0)
{
sz[t]=num[i];
k++;
t=k;
}
}

for(int m=1;m<=k;m++)
{
for(int a=0;a<k-m;a++)
{
if(sz[a]>sz[a+1])
{
e=sz[a+1];
sz[a+1]=sz[a];
sz[a]=e;}
}
}

for(int b=0;b<k;b++)
{
if(b==k-1)
printf("%d",sz[b]);
else
printf("%d,",sz[b]);

}
return 0;
}


