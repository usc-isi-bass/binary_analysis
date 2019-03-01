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

int search(int a[],int b,int c);
int main()
{
int n,s=1,t,k;
int *p,*a,*b;
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
a=(int*)malloc(n*sizeof(int));
b=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++) scanf("%d",p+i);
for(int i=0;i<n;i++) a[i]=-1;
a[1]=p[0];
for(int i=0;i<n;i++)
{
t=0;
k=search(a,s,p[i]);
if(k>s) s++;
a[k]=p[i];
}
printf("%d\n",s);
return 0;
}
int search(int a[],int s,int m)
{
int low = 1;
int high = s;
int mid;

while (low < high) {
mid = (low + high) / 2;
if (a[mid] == m )
return mid+1;
if (a[mid] > m)
low = mid + 1;
else
high = mid;
}
if (a[low] <= m)
return low;
else
return low+1;
} 
