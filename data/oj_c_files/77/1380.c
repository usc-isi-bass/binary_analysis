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

char A[110]={'\0'},b,g;      //??????:??A?????,b`g????????????
int i,j,l,a;                 //??????:????i`j`a,????l,
void outcome()               //????
{
     for (i=a;i<l;i++)
     {
         if (A[i]==g)
         {
             A[i]='\0';
             break;
         }
     }
     for (j=i-1;j>=0;j--)
     {
         if (A[j]==b)
         {
             A[j]='\0';
             break;
         }
     }
     cout<<j<<" "<<i<<endl;
     if (i!=l-1)
     {
         outcome();
     }
}
int main()
{
    cin>>A;
    b=A[0];
    l=strlen(A);
    for (a=1;a<l;a++)         //??????????????????????
    {
        if (A[a]!=b)
        {
            g=A[a];
            break;
        }
    }
    outcome();
    return 0;
}