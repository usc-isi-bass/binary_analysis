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
    char st[1000]; cin.getline(st,1000);
char a=st[0];
    int count=0,z[1000];
    for (int i=1;i<=strlen(st);i++)
        if (st[i-1]==a) {count++; z[count]=i;}
        else {cout<<z[count]-1<<' '<<i-1<<endl; z[count]=0; count--;}

    return 0;
}
