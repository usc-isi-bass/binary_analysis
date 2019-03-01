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
    int *p=NULL;
    int n; 
    int init[100];
    cin>>n;
    cin>>init[0];
    p=&init[0];
    
    for(int i=1; i<n ;i++)
    cin>>*(p+i);
    
    for(int i=1;i<n;i++)
    cout<<*(p+n-i)<<' ';
    cout<<*p;
    
    
    return 0;
}
