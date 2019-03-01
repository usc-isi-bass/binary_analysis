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

int kuai(int x,int y);
int main()
{
    int a,b;
    cin>>a>>b;
    kuai(a,b);
    return 0;
}

int kuai(int x,int y)
{
    if(x==y)
    cout<<x<<endl;
    if(x<y)
    kuai(x,y/2);
    if(x>y)
    kuai(x/2,y);
    return x;
}
