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

int num,n,m,a[100][100];
int main()
{   cin>>num;
    for(int x=0;x<num;x++)
    {       cin>>m>>n;
            for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            cin>>a[i][j];
            int ans=0;
            for(int i=0;i<m;i++)
            ans+=a[i][0]+a[i][n-1];
            for(int i=1;i<n-1;i++)
            ans+=a[0][i]+a[m-1][i];
            cout<<ans<<endl;
    }
    getchar();getchar();
    return 0;
}