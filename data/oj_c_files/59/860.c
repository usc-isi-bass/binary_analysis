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
int n,m,i,j,k,s=0,b[120][120];char a[200][200];
for(i=0;i<=119;i++)
 for(j=0;j<=119;j++)
   b[i][j]=-1;
cin>>n;
for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   cin>>a[i][j];
cin>>m;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
  {
    if(a[i][j]=='.')
     b[i][j]=0;
     if(a[i][j]=='@')
     b[i][j]=1;
         }
for(k=1;k<=m-1;k++)
{
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
    {
      if(b[i][j]==1)
        {
          if(b[i][j-1]==0)
             b[i][j-1]=2;
          if(b[i][j+1]==0)
             b[i][j+1]=2;
          if(b[i+1][j]==0)
            b[i+1][j]=2;
          if(b[i-1][j]==0)
           b[i-1][j]=2;
        }
     }
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
    if(b[i][j]==2)
      b[i][j]=1;
  
}
 for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
    if(b[i][j]==1)
   s=s+1;
cout<<s;
return 0;
}

  
  
