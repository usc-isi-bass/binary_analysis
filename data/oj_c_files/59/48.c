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


int main(int argc, char *argv[])
{
  int n,m,i,j,k,s=0;
  char a[110][110][110];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%s",&a[1][i]);
  }
  scanf("%d",&m);
 
 
 
  for(k=2;k<=m;k++)
  {
    if(a[k-1][0][0]=='.')
    {
      if((a[k-1][1][0]=='@')||(a[k-1][0][1]=='@'))
        a[k][0][0]='@';
      else
        a[k][0][0]=a[k-1][0][0];
    }
    else
      a[k][0][0]=a[k-1][0][0];
      
    if(a[k-1][0][n-1]=='.')
    {
      if((a[k-1][0][n-2]=='@')||(a[k-1][1][n-1]=='@'))
        a[k][0][n-1]='@';
      else
        a[k][0][n-1]=a[k-1][0][n-1];
    }
    else
      a[k][0][n-1]=a[k-1][0][n-1];
      
    if(a[k-1][n-1][0]=='.')
    {
      if((a[k-1][n-1][1]=='@')||(a[k-1][n-2][0]=='@'))
        a[k][n-1][0]='@';
      else
        a[k][n-1][0]=a[k-1][n-1][0];
    }
    else
      a[k][n-1][0]=a[k-1][n-1][0];
      
    if(a[k-1][n-1][n-1]=='.')
    {
      if((a[k-1][n-1][n-2]=='@')||(a[k-1][n-2][n-1]=='@'))
        a[k][n-1][n-1]='@';
      else
        a[k][n-1][n-1]=a[k-1][n-1][n-1];
    }
    else
      a[k][n-1][n-1]=a[k-1][n-1][n-1];              
    
    for(i=1;i<n-1;i++)
    {
      if((a[k-1][i][0]=='.')&&((a[k-1][i-1][0]=='@')||(a[k-1][i+1][0]=='@')||(a[k-1][i][1]=='@')))
        a[k][i][0]='@';
      else
        a[k][i][0]=a[k-1][i][0];
      
      if((a[k-1][i][n-1]=='.')&&((a[k-1][i-1][n-1]=='@')||(a[k-1][i+1][n-1]=='@')||(a[k-1][i][n-2]=='@')))
        a[k][i][n-1]='@';
      else
        a[k][i][n-1]=a[k-1][i][n-1];
      
     if((a[k-1][0][i]=='.')&&((a[k-1][0][i-1]=='@')||(a[k-1][1][i]=='@')||(a[k-1][0][i+1]=='@')))
        a[k][0][i]='@';
      else
        a[k][0][i]=a[k-1][0][i];
      
     if((a[k-1][n-1][i]=='.')&&((a[k-1][n-1][i-1]=='@')||(a[k-1][n-2][i]=='@')||(a[k-1][n-1][i+1]=='@')))
        a[k][n-1][i]='@';
      else
        a[k][n-1][i]=a[k-1][n-1][i];
    }               
                   
    for(i=1;i<n-1;i++)
    {
      for(j=1;j<n-1;j++)
      {
        if(a[k-1][i][j]=='.')
        {
          if((a[k-1][i-1][j]=='@')||(a[k-1][i+1][j]=='@')||(a[k-1][i][j-1]=='@')||(a[k-1][i][j+1]=='@'))
            a[k][i][j]='@';
          else 
            a[k][i][j]=a[k-1][i][j];
        }
        else
          a[k][i][j]=a[k-1][i][j];
      }
    }
  }
 
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[m][i][j]=='@')
       s++;
    }
  }
  printf("%d\n",s);
  return 0;
}