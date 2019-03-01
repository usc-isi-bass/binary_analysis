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

    float a,b;
    float c[n];
    int i=0,j=1;
    for (i=0;i<n;i++)

        {
            cin>>a>>b;

            c[i]=b/a;
        }
         for (j=1;j<n;j++)
         {
             if((c[j]-c[0])>0.05)
                cout<<"better"<<endl;
             else if((c[0]-c[j])>0.05)
                cout<<"worse"<<endl;
             else
                cout<<"same"<<endl;


         }


    return 0;
}