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

int main ()
{int n,i,j,a,b,e,k=0;
scanf("%d",&n);
int sz[n];
struct qujian{int a;int b;}q[n],h;
for(i=0;i<n;i++)
{scanf("%d%d",&a,&b);
q[i].a=a;
q[i].b=b;}
for(i=0;i<n;i++)
{for(j=0;j<n-1;j++){
        if(q[j].a>q[j+1].a){
            h=q[j];
            q[j]=q[j+1];
            q[j+1]=h;}}}
e=q[1].b;
for(i=0;i<=n;i++)
{for(j=0;j<i;j++)
{if(e<q[j].b)e=q[j].b;
sz[i]=e;}}
for(i=0;i<n;i++)
{if(sz[i]<q[i].a)k=k+1;}
if(k!=0)printf("no");
else printf("%d %d",q[0].a,sz[n]);
	return 0;
}


