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
        int n,i=1,j=1,k=1,l,t;
        char a[100000];
        char x;
        cin>>n;
        for(;k<=n;k++)
        {
                cin>>a;
                l=strlen(a);
                for(i=0;i<l-1;i++)
                {
                        t=a[i];
                        for(j=i+1;j<l;j++)
                        {
                                if(a[j]==1) continue;
                                if(a[j]==t)
                                {
                                        a[i]=1;
                                        a[j]=1;
                                }
                        }
                }
                for(i=0;i<=l;i++)
                {
                        if(a[i]!=1)
                        {
                                cout<<a[i]<<endl;
                                break;
                        }
                }
                if(i==l) cout<<"no"<<endl;
        }
        return 0;
}
