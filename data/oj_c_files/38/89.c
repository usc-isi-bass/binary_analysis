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

const int MAXNUM=100;
int main()
{
 double data[MAXNUM],sum,ans;
 int casenum,n;
 cin>>casenum;
 for(int i=0;i<casenum;i++)
 {
  cin>>n;
  sum=0;ans=0;
  for(int j=0;j<n;j++)
  {scanf("%lf",&data[j]);sum+=data[j];}
  
  for(int k=0;k<n;k++)
  {ans+=(sum-n*data[k])*(sum-n*data[k]);}
  ans=(double)sqrt((double)ans/pow(n,3));
  printf("%.5lf\n",ans);
 }
 return 0;
}
