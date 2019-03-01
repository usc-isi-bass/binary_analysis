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

int v;
void fy(int s)
{
     cout<<v/s<<endl;
     v=v%s;
}
int main()
{
    int a,b,c=0,d[4]={0};
    double m,n=0,r;
    char s[100];
    cin>>v;
    fy(100);
    fy(50);
    fy(20);
    fy(10);
    fy(5);
    fy(1);
    return EXIT_SUCCESS;
}
