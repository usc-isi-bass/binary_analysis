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
int m,n,i,j;
cin>>m>>n;
int a[11][11]={0},save[11][11]={0};
a[5][5]=m;
while(n--)
{
for(i=1;i<=9;i++)
for(j=1;j<=9;j++)
if(a[i][j]!=0)
{
save[i-1][j]+=a[i][j];
save[i+1][j]+=a[i][j];
save[i][j-1]+=a[i][j];
save[i][j+1]+=a[i][j];
save[i-1][j-1]+=a[i][j];
save[i-1][j+1]+=a[i][j];
save[i+1][j-1]+=a[i][j];
save[i+1][j+1]+=a[i][j];
a[i][j]*=2;
}
for(i=1;i<=9;i++)
for(j=1;j<=9;j++)
if(save[i][j]!=0)
{a[i][j]+=save[i][j];
save[i][j]=0;}
}
for(i=1;i<=9;i++)
{
for(j=1;j<=8;j++)
cout<<a[i][j]<<' ';
cout<<a[i][9]<<endl;
}
return 0;
}