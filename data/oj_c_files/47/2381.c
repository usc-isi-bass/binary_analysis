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
    int n; 
    int a[100]={0};
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
   }  
   for (int i=n-1;i>0;i--)
   cout<<a[i]<<" ";
   cout<<a[0];
   return 0;
}     
        
