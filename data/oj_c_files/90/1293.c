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

  int Dgetnum(int m,int n,int min)
  {
    int i;
 int k;
 if(m==0)
  return 1;
 if(n==1)
  return 1;
 k=0;
 for(i=min;i<=m;i++)
 {
  if((m-i)>=i||(m-i)==0)
    k=k+Dgetnum(m-i,n-1,i);
 }
 
 return k;
  }

int main()
{
    int i,j,t,m,n;
 cin>>t;
 for(i=0;i<t;i++)
 {
  cin>>m>>n;
  cout<<Dgetnum(m,n,1)<<endl;
 }
 return 0;
}

