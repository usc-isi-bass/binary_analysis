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

void main()
{
int m,n,i,j,l,p,q,k=0;


scanf("%d%d",&m,&n);

if(m%2==0)m++;

for(i=m;i<=n;i=i+2)
{

p=i;
for(q=0;p>0;){q*=10;q+=p%10;p/=10; }
if(q!=i)continue;

for(j=3;j<i/2;j=j+2)
{
	if(i%j==0) {j=0;break;}
}

if(j==0) continue;

if(k==0) {printf("%d",i);k=1;}
else printf(",%d",i);
}

if(k==0)printf("no");
}