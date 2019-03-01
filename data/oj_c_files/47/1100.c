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
    int a[100],b[100];
    int i,j,m;
    cin>>j;
     for(i=1;i<=j;i++){
       cin>>a[i];
     }
    for(i=1;i<=j;i++){                 
    m=j+1-i;
    b[m]=a[i];
    }
    for(m=1;m<=j-1;m++){
      cout<<b[m]<<" ";
    }
    cout<<b[j];
    return 0;
}
