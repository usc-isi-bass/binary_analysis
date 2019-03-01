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
    int a1=1, a2=1, ai, n, a;
    cin >> n;
    
    for (int i=0; i < n; i++)
    {
        cin >> a;
        if(a==1 || a==2)
            cout << a1 << endl;
        else
            {
                for(int j=3; j <= a;j++)
                {
                        ai = a1 + a2;
                        a1 = a2;
                        a2 = ai;						            
                }
                cout << ai << endl;
                a1 = 1;
                a2 = 1;
            }
    
    }
    
    return 0;

}