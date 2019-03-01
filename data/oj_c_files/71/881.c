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
	int n;
	cin>>n;	
	int judge=0;
	int dayofmonth[13]={31,28,31,30,31,30,31,31,30,31,30,31};
  int year,month1,month2;
for(int inputtime=1;inputtime<=n;inputtime++)
{judge=0;
  cin>>year>>month1>>month2;
  dayofmonth[1]=28;
  if(year%4==0&&year%100!=0||year%400==0)
	  dayofmonth[1]=29;
 for(int i=min(month1,month2)-1;i<max(month1,month2)-1;i++)
	 judge+=dayofmonth[i];
 
 if(judge%7==0)
	 cout<<"YES"<<endl;
 else
	 cout<<"NO"<<endl;
}
 
  return 0;
}