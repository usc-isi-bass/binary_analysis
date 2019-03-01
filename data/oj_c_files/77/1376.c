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



int dg(int l);

char a,st[1000];

int main()
{
    cin>>st; a=st[0]; 
    int h=0,z[100];
    for (int i=1;i<=strlen(st);i++)
    {
        if (st[i-1]==a) {h++; z[h]=i;}
           else {cout<<z[h]-1<<' '<<i-1<<endl; z[h]=0; h--;}
    }

    return 0;
}
