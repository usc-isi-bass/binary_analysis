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
{   int n;
    cin>>n;
    char b;
    cin.get(b);
    char a[100]={0};
    int c[100]={0};
    int d; 
    int i;
    for(i=1;i<n;i++)                     //?? 
       {  cin>>d;
          c[i]=d;
          cin.get(b);
          a[i]=b;
       }
    cin>>d;
    c[n]=d;
    for(i=n;i>1;i--)               //???? 
      {  cout<<c[i];
        cout<<a[i-1];
      }
    cout<<c[1];

    return 0;
}