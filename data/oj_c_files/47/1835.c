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

/*
  Name: ????
  Author: chenminhuan(1200012757)
  Date: 10/12/12 
*/

const int maxN = 1000;
int main()
{
    int a[maxN] ,i ,n, *p = NULL, *q = NULL;
    cin>>n;
    for (i = 0,p = a; i < n ;++i, ++p) //??????n?? 
        cin>>*p;
        
    for (p = a, q= a+n-1; p<q; ++p,--q) //?????????? 
        swap(*p, *q);//?????? 
        
    cout<<a[0];                
    for (p = a+1, i =1; i < n ;++i, ++p) //????? 
        cout<<" "<< * p;;
    
    return 0;
}