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
    int a,b,c;
    for(a=1;a<=3;a++)
    for(b=1;b<=3;b++)
    for(c=1;c<=3;c++)
    {
                    if(a!=b&&b!=c)
                    {
                                  if((a+(c==a)+(b>a))==3&&(b+(a>b)+(a>c))==3&&(c+(c>b)+(b>a)==3))//??????????
                                  {
                                  if(a==3&&b==2&&c==1)//????????
                                  cout<<"CBA";
                                  else if(a==3&&b==1&&c==2)
                                  cout<<"BCA";
                                  else if(a==2&&b==3&&c==1)
                                  cout<<"CAB";
                                  else if(a==2&&b==1&&c==3)
                                  cout<<"BAC";
                                  else if(a==1&&b==3&&c==2)
                                  cout<<"ACB";
                                  else 
                                  cout<<"ABC";
                                  break;
                                  }
                    }
    }

    return 0;
}
    
                         