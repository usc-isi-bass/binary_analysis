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

int k,m,n,sum;
int num[101][101];
int main()
{
    int i,j,l;
    cin>>k;
    for(i=0;i<k;++i)
    {
            memset(num,0,sizeof(num));
            sum=0;
            cin>>m>>n;
            for(j=0;j<m;++j)
            {
                    for(l=0;l<n;++l)
                    {
                            cin>>num[j][l];
                    }
            }
            for(j=0;j<n;++j) sum+=num[0][j]+num[m-1][j];
            for(j=1;j<m-1;++j) sum+=num[j][0]+num[j][n-1];
            cout<<sum<<endl;
    }
    return 0;
}
