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

/**
* @file 3.cpp
* @author ???
* @date 2011-09-28
* @description
* ??????: ?7???????
*/
int tell(int a)
{int s,k,m=0;
 for (k=0,s=a;k<3;k++,s/=10) if(s%10==7) m=1;
 if (a%7==0) m=1;
 return m;
}
int main()
{int n,sum,i;
 cin>>n;
 for(i=1,sum=0;i<n+1;i++){if(tell(i)==1) continue;
                          sum+=i*i;
                         }
 cout<<sum<<endl; 
 return 0;
}