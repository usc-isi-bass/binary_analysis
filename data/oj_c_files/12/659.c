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

//****************************************
//*???   ??                           **
//*??????       **
//*???2011.10.21                         **
//****************************************
int main()
{
    int a[20],k=0,i,w,y,n,p;     //k????
    while(1)
    {
            cin >> p;
            if(p == -1)    //????-1,????? 
                    break;
            else
            {   a[0]=p;
                for(i=1; ;i++)
                {
                        cin >> a[i];
                        if(a[i]==0)
                        {
                                    n=i-1;
                                    break;          
                        }
                }   
                for(w=0;w<=n;w++)
                {
                for(y=0;y<=n;y++)
                {
                         if(a[y]==2*a[w]) 
                         k++;       
                }
                }
                cout << k << endl;
                i=0;
                k=0;
            }
    } 
    return 0;    
}
