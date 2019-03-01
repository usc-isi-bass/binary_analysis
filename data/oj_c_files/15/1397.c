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
{int a[100][100],s,i,n,j,a1,b1,a2,b2,p=0,l,w;
 cin>>n;
for(i=0;i<n;i=i+1)
 {
  for(j=0;j<n;j=j+1)
   cin>>a[i][j];
}
for(i=0;i<n;i=i+1)
 {if(p==0)
  for(j=0;j<n;j=j+1)
   {if(a[i][j]==0) {a1=i;b1=j;p=p+1;}}}
p=0;
for(i=n-1;i>=0;i--)
{if(p==0) 
 for(j=n-1;j>=0;j=j-1)
  {if(a[i][j]==0) {a2=i;b2=j;p=p+1;}}}
l=b2-b1+1;w=a1-a2+1;
s=w*l;
cout<<s;
return 0;

}