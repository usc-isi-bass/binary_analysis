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

void judge(double,double);//??
double standard;//???????
const double m=0.05;//??
int main()
{
  int n,i;
  double sum,useful;
  cin>>n;
  cin>>sum>>useful;
  standard=useful/sum;
  for(i=2;i<=n;i++)
  {
    cin>>sum>>useful;
	judge(sum,useful);
  }
  return 0;
}
void judge(double sum,double useful)
{
  double rate;
  rate=useful/sum;
  if(abs(rate-standard)<=m)
	  cout<<"same"<<endl;
  else if(rate-standard>m)
	  cout<<"better"<<endl;
  else
	  cout<<"worse"<<endl;
}