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
    char a[30];
    gets(a);
    int k;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='0'&&a[i]<='9')
         {
           for(int j=i;j<strlen(a);j++)
         {
            if(a[j]<'0'||a[j]>'9')
            {
               cout<<endl;
               break;
            }
            cout<<a[j];
            k=j;
         }
         i=k;
         }
    }
   return 0;
}
