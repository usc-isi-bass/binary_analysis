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
 double a[100]={0},b[2][100]={0},c;
 a[0]=1;
 a[1]=2;
int n,i,j,m; 
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>m;
  for(j=2;j<=m;j++)
   a[j]=a[j-1]+a[j-2];
   
  b[0][0]=2;
  b[1][0]=1;
 for(j=1;j<m;j++)
  {b[0][j]=b[0][j-1]*a[j]+a[j+1]*b[1][j-1];
   b[1][j]=b[1][j-1]*a[j];}
 c=b[0][m-1]/b[1][m-1];
 printf("%.3f",c);
 cout<<endl;}
 cin.get(); cin.get(); cin.get(); cin.get();
return 0;}
