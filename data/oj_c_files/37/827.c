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
    int n,i,j,k,t,length;
    char st[100000];
    cin>>n;
    for (i=0;i<=n;i++)
    {
        gets(st);
        t=0;
        length=strlen(st);
        for (j=0;j<length;j++)
        {
            t=0;
            for (k=0;k<length;k++)
            {
                if ((st[k]==st[j]) &&(k!=j))
                {
                    t=1;
                    break;
                }
            }
            if (t==0) 
            {
                cout<<st[j]<<endl;
                break;
            }
        }
        if (t==1) cout<<"no"<<endl;
    }
    return 0;
}
            
        
