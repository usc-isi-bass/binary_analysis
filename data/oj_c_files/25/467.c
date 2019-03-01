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

char r[101];
int main()
{
    int N,i,j,k,num;
    cin>>N;
    r[0]='1';
    if(N==0)
    {
        cout<<1;
        return 0;
    }
    else 
    {
        for(i=1;i<=N;i++)
        {
              k=0;
              for(j=0;j<strlen(r);j++)
                {
                    if (r[j]>='0'&&r[j]<='4')
                    {   
                        r[j]='0'+2*(r[j]-'0')+k;
                        k=0;
                    }
                    else
                    {
                        r[j]='0'+2*(r[j]-'5')+k;
                        k=1;
                    }
                }
                if(k==1) r[j]='1';
            
        }
    }
    for (i=strlen(r)-1;i>=0;i--)
    cout << r[i];
    return 0;
}

