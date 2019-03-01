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
{int n,k,i;
cin>>n>>k;
int apple[n+1];
apple[1]=0;
apple[n]=k+n;
while(true)
{     for(i=n;i>=1;i--)
      {     if(apple[i]%(n-1)==0)apple[i-1]=(apple[i]*n/(n-1))+k;
            else break;

      }

apple[n]=apple[n]+n;
if(apple[1]!=0)break;
}
cout<<apple[1];
return 0;
}