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
 int i,j,k;
 int x,y;
 cin>>x>>y;
 int a[100][100];
 for(i=0;i<x;i++)
  {for(j=0;j<y;j++)
   cin>>a[i][j];}
 int z,h;
 cin>>z>>h;
 int b[100][100];
 for(i=0;i<z;i++)
    {for(j=0;j<h;j++)
     cin>>b[i][j];}
 int m=x,n=h;
 int c[m][n];
  for(j=0;j<n;j++)
      {for(i=0;i<m;i++)
       {c[i][j]=0;
        for(k=0;k<y;k++)
        c[i][j]+=a[i][k]*b[k][j];}}
for(i=0;i<m;i++)
   {for(j=0;j<n-1;j++)
    {cout<<c[i][j]<<" ";}
    cout<<c[i][n-1];
    cout<<endl;}
return 0;
}


