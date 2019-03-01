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
    int num[1000],rev_num[1000];
    int n,m,i;
    cin>>n;
    m=n-1;
    for (i=0;i<n;i++)
        cin>>num[i];
    for (i=0;i<n;i++)
        rev_num[m--]=num[i];
    for (i=0;i<n-1;i++)
        cout<<rev_num[i]<<" ";
        cout<<rev_num[i];

        return 0;
}
