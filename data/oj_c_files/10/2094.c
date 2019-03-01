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

int h[25],n; 
int main() 
{  
int max(int a,int b);
int k,i;
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&h[i]);
k=max(50000,0);
printf("%d",k);
return 0;
} 
int max(int hmax,int b)
{
int x,y,z;
while(h[b]>hmax) b=b+1;
if(b==n)return 0;
x=max(hmax,b+1);
hmax=h[b];
y=1+max(hmax,b+1);
z=x>y?x:y;
return z;
}
