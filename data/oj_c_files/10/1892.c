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

int a[25],num[25]={0};
int main()
{
int n,i,k=0;
int search(int i,int n);
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
i--;
for(;i>=0;i--)
num[i]=1+search(i,n);
for(i=0;i<n;i++)
if(num[i]>k) k=num[i];
printf("%d\n",k);
return 0;
}
int search(int i,int n)
{
int p,q=0;
for(p=i+1;p<n;p++)
{
if(a[p]<=a[i])
if(q<num[p]) q=num[p];

}

return q;
}