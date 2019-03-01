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

int main(){
    int t,m,n,f[101][101],i,j;
    for(i=1;i<101;++i)f[i][0]=0,f[0][i]=1;
    for(i=1;i<101;++i)
        for(j=1;j<101;++j)
            if(i<j)f[i][j]=f[i][j-1];
            else f[i][j]=f[i-j][j]+f[i][j-1];
    cin>>t;
    while(t--){
        cin>>m>>n;
        cout<<f[m][n]<<endl;
    }
}
