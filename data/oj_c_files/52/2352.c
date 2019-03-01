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
    int sz[100];
    int n,i,o,e;
    cin >> n;
    cin >> o;
    for(i=0;i<n;i++)
     {
       cin >> sz[i];
     }
    int j;
    for(j=n-1;j>=0;j--)
     {   
       sz[j+o]=sz[j];
     }
    int k;
    for(k=0;k<o;k++)
     {
       sz[k]=sz[k+n];
     }
    for(e=0;e<n-1;e++)
    cout << sz[e] <<" ";
    cout << sz[n-1];

    return 0;
}

