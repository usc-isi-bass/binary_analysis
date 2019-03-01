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


int a[1000],b[1000];
void inputdata();
void outputdata();
void sortdata();

int main()
{
    inputdata();
    sortdata();
    outputdata();

    return 0;
}

void inputdata()
{
     cin>>a[0]>>b[0];
     for (int i=1;i<=a[0];i++) cin>>a[i];
     for (int i=1;i<=b[0];i++) cin>>b[i];
}
void sortdata()
{
     sort(a+1,a+a[0]+1);
     sort(b+1,b+b[0]+1);
}
void outputdata()
{
     for (int i=1;i<=a[0];i++) cout<<a[i]<<' ';
     for (int i=1;i<b[0];i++) cout<<b[i]<<' ';
     cout<<b[b[0]];
}
