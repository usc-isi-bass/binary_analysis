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

int A[100],n,i=0;                 //??????:??A????,????n,????i
void change()                     //?????????,?????
{
     cin>>A[i];
     i++;
     if (i<n)
        change();
     i--;
     if (i!=0)
        cout<<A[i]<<" ";
     else
        cout<<A[i];
}
int main()
{
    cin>>n;                      //??????
    change();                    //????change
    return 0;
} 