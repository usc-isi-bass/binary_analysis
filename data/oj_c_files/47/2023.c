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
    int n;        //??n
    cin>>n;       //??n
    int a[100],i,j;   //????
    int *p=&a[0];
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);     //????
    }
    for(j=0;j<n-1;j++)
    cout<<*(p+n-j-1)<<" ";      //?????
    cout<<*p;
    return 0;
}
