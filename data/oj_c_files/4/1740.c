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
    int r,c,a[99][99];
    cin>>r>>c;
    for(int i=0;i<r;++i)
        for(int j=0;j<c;++j)
            cin>>a[i][j];
    for(int j=0;j<c;++j)
        for(int x=j,y=0;x>=0&&y<r;--x,++y)
            cout<<a[y][x]<<endl;
    for(int i=1;i<r;++i)
        for(int y=i,x=c-1;x>=0&&y<r;--x,++y)
            cout<<a[y][x]<<endl;
}