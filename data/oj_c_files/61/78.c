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
    int a[100]={1,1,1,1};
    int i=0;
    int *p=a+3;
    for(i=0;i<100;i++)
    {
       *(p+i)=*(p+i-1)+*(p+i-2);
       //cout<<*(p+i)<<endl;
    }
    int n;
    cin>>n;
    i=0;
    while(i<n)
    {
        int m;
        cin>>m;
        cout<<a[m]<<endl;
        i++;

    }
  }