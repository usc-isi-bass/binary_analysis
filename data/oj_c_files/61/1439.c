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
int n,i,j,a,sz[20],r[100];
sz[0]=0;
sz[1]=1;
scanf("%d",&n);
for(j=0;j<n;j++)
{
  scanf("%d",&a);
    for(i=2;i<=a;i++)
	{sz[i]=sz[i-1]+sz[i-2];}
  r[j]=sz[a];
}
for(j=0;j<n;j++)
{if(j==0){printf("%d",r[j]);}
 else{printf("\n%d",r[j]);}
}
return 0;
}