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
{int b[2][100]={0};
b[0][0]=2;
int n,i,j,k;
cin>>n;
if(n==0)
cout<<"1"<<endl;
else if(n==1)
cout<<"2"<<endl;
else{
for(i=1;i<n;i++)
{k=90;
while(b[0][k]==0)k--;

for(j=0;j<=k+1;j++)
{if(j!=0)
{b[1][j]=b[0][j]*2+b[1][j-1]/10;
b[0][j]=b[1][j]%10;}
else {b[1][0]=b[0][0]*2;
b[0][0]=b[1][0]%10;
}}}

k=90;
while(b[0][k]==0)k--;

for(;k>=0;k--)
cout<<b[0][k];}
return 0;
}