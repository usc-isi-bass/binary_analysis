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
    int k,i;
    cin>>k;
    for (i=0;i<k;i++)
    {
        int m,n,j,l,s=0,A[110];
        cin>>m>>n;
        for (j=0;j<m;j++)
        {
            for (l=0;l<n;l++)
               cin>>*(A+l);
            if (j==0||j==m-1)
            {
                for (l=0;l<n;l++)
                    s=s+*(A+l);
            }
            else
                s=s+*A+*(A+n-1);
        }
        cout<<s<<endl;
    }
    return 0;
}
