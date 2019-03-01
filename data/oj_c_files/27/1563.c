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
    int n;   //?? n ????? 
    double a, b, c, delta, x1, x2;   //?? a,b,c,delta,x1,x2 ?????????
    cin >> n;   //??n 
    cout << fixed;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;   //??a,b,c
        delta = b * b - 4 * a * c;
        if (delta > 0)   //??2?? 
        {
             x1 = (-b + sqrt(delta)) / (2 * a);   //??x1 
             x2 = (-b - sqrt(delta)) / (2 * a);   //??x2 
             if (x1 == 0)
             {
                 x1 = 0;
             } 
             if (x2 == 0)
             {
                 x2 = 0;
             }
             cout << setprecision(5) << "x1=" << x1 << ";x2=" << x2 << endl;   //??x1,x2 ?????????? 
        }
        else if (delta == 0)   //??2????
        {
             x1 = -b / (2 * a);   //??x 
             if (x1 == 0)
             {
                 x1 = 0;
             }
             cout << setprecision(5) << "x1=x2=" << x1 <<endl;   //??x ??????????
        }
        else
        {
             x1 = -b / (2 * a);   //????
             if (x1 == 0)
             {
                 x1 = 0;
             }
             x2 = sqrt(-delta) / (2 * a);   //??????? 
             cout << setprecision(5) << "x1=" << x1 << "+" << x2 << "i" << 
             ";x2=" << x1 << "-" << x2 << "i" << endl;   //???? ??????????
        }
    } 
    return 0;                    
}  