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

/*
  Name: ??(5-5) ????
  Author: 120012757(chenminhuan)
  Date: 15/10/12 18:28
*/

int n,ans,cnt,a,b;
int main()
{
   
    cin>>n;                                             //read in times
    ans = 0;                                            // answer
    cnt = 0;                        
    while (n--){
          cin>>a>>b;
          if(a>=90 && a<=140 && b>=60 && b<=90) cnt++;  
          else
          {
              if(cnt>ans) ans = cnt;
              cnt = 0;
          }
    }
    if (cnt>ans) ans = cnt;
    cout<<ans<<endl;
    return 0;
}