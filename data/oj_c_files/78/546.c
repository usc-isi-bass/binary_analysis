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
    int z,q,s,l,sum,i;
    char a[5];
    for(i=1;i<=5;i++)
    a[i]=0;
    for(z=1;z<=5;z++)
    {
        for(q=1;q<=5;q++)
        {
             for(s=1;s<=5;s++)
             {
                  for(l=1;l<=5;l++)
                  {
                        sum=(z+q==s+l)+(z+l>s+q)+(z+s<q);
                        if(sum==3)
                        {
                            a[z]='z';
                            a[q]='q';
                            a[s]='s';
                            a[l]='l';
                            for(i=5;i>=1;i--)
                            {if(a[i]==0)
                             {continue;}
                             else;
                             {cout<<a[i]<<" "<<i<<"0"<<endl;} 
                            } 
                            break;
                        }
                  }
             }
        }
    }
    return 0;
}