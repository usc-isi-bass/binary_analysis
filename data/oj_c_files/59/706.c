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

char a[105][105];
int n;
void infect(int m)
{
  int i,j
  ;if(m==1) return ;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if(a[i][j]=='@')
      {
        if(i+1<n &&a[i+1][j]=='.')
          a[i+1][j]=',';
        if(j+1<n &&a[i][j+1]=='.')
          a[i][j+1]=',';
        if(i-1>=0 &&a[i-1][j]=='.')
          a[i-1][j]=',';
        if(j-1>=0 && a[i][j-1]=='.')
          a[i][j-1]=',';
      }
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        if(a[i][j]==',')
           a[i][j]= '@';
    
    infect(m-1);
    return ;
}
int main()
{
  int m,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%s",a[i]);
  scanf("%d",&m);
  infect(m);
  int sum=0;
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        if(a[i][j]=='@')
          sum++;
  printf("%d",sum);
 return 0;    
}
