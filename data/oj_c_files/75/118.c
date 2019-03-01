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
{int x[1000],y[1000],people[1001]={0};
 int i=0,length=0;
 do
   cin>>x[i++];
 while(cin.get()==',');
 length=i;i=0;
 do
   cin>>y[i++];
 while(cin.get()==',');
 for(i=0;i<length;i++)
  for(int j=x[i];j<y[i];j++)
     people[j]++;
 int max=0;
 for(i=0;i<=1000;i++)
  if(people[i]>max)
    max=people[i];
 cout<<length<<' '<<max;
 return 0;
}
