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
    int n,k;
    cin>> n >>k;
    int a[n+1],d=1;//a[n]?????????????
    a[1]=0;
    for(a[n]=n+k;d==1;a[n]=a[n]+n)
    {
      for(int i=n;i>1;i--)
      {
        if(a[i]%(n-1)==0)//???? 
        a[i-1]=a[i]*n/(n-1)+k;//???? 
        else
        break;
      }
      if(a[1]!=0)//??????????a[1] 
      d=0;
    }
    cout<<a[1]<<endl; 
    return 0;
}
