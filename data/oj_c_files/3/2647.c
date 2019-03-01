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
    int n,k;
    int a[2001];
    cin>>n>>k;
    for (int i=0; i<n; i++) 
    {
        cin>>a[i];
     }
 /*   for (int i=0;i<n-1;i++)
    for (int j=i+1; j<n; j++)
    if (a[i]>a[j]) {
                   int t;
                   t=a[j];
                   a[j]=a[i];
                   a[i]=t;
                   }      */
    int p=0;
    for (int i=0; i<n; i++)
    for (int j=i+1; j<n; j++)
      if (a[i]+a[j]==k) p=1;
    
    if (p==0) cout << "no";
    else cout << "yes";
          
    return 0; 
         
} 