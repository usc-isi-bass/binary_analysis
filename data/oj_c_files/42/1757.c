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

int s[1000000];
int main()
{
    int i,j,k,n,a,pos;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>s[i];
    cin>>k;
    for (int i=1;i<=n;i++)
        {if (s[i]!=k)
           pos=i;}
    for(i=1;i<=n;i++)
    {
        if(s[i]!=k && i!=pos)
            cout<<s[i]<<" ";
        if (s[i]!=k && i==pos)
           cout<<s[i]<<endl;
    }
    return 0;
}  
