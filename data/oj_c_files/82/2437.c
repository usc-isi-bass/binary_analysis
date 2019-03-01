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

int v=0,r=0;
void fy()
{
     int a,b;
     cin>>a>>b;
     if(a>=90&&a<=140&&b>=60&&b<=90)
     r++;
     else {
          if(r>v)
          v=r;
          r=0;
          }
}
int main()
{
    int a,i,b,z,t=0,c=0,d[4]={0};
    double m,n=0;
    char s[100];
    cin>>b;
    for(i=0;i<b;i++)
    {
       fy();
    }
    cout<<(v>r?v:r)<<endl;
    return EXIT_SUCCESS;
}
