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

//??????????????
//??????
//?????2011-1-8


int main()
{
    int n,k,i,j,x,y,t,ans[1000]={0};
    cin>>n;
    for (k=1;k<=n;k++)
      {
           cin>>x>>y;
           for (i=1;i<=x;i++)
             for (j=1;j<=y;j++)
               {
                    cin>>t;//???? 
                    if ((i==1)||(i==x)||(j==1)||(j==y)) ans[k]+=t;//??????? 
               }
      }
    for (i=1;i<=n;i++)//?? 
      {
          cout<<ans[i];
          if (i!=n) cout<<endl;
      }
    return 0;
}  
            