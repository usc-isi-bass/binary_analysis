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

int cmp(const void *a,const void *b)
{
 return *(int *)a < *(int *)b ? 1 : -1; 
}
int main()
{
 int n,m;
 int i,j,tian[1005],king[1005];
 int tmax,kmax,tmin,kmin;
 while(cin>>n,n)
 {
  for(i=1;i<=n;i++)
   cin>>tian[i];
  qsort(tian+1,n,sizeof(tian[0]),cmp);
  for(j=1;j<=n;j++)
   cin>>king[j];
  qsort(king+1,n,sizeof(king[0]),cmp);
  int cnt = 0;
  tmax = 1;
  tmin = n;
  kmax = 1;
  kmin = n;
  for (i = 1; i <= n; i++)
  {
   if(tian[tmax] > king[kmax])
   {
    cnt++;
    tmax++;
    kmax++;
   }
   else if(tian[tmax] < king[kmax])
   {
    cnt--;
    tmin--;
    kmax++;
   }
   else
   {
                if(tian[tmin] > king[kmin])
    {
     cnt++;
     tmin--;
     kmin--;
    }
    else if(tian[tmin] <king[kmin])
    {
     cnt--;
     tmin--;
     kmax++;
    }
    else
    {
     if(tian[tmin] < king[kmax])
     {
      cnt--;
      tmin--;
      kmax++;
     }
     
    }
   }
   
  }
    cout<<cnt*200<<endl;
 }
 return 0;
}
