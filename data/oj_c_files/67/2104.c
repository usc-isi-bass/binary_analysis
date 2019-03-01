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
    cin >> n;
    double a,b;
    cin >> a >> b;
    double c;
    c=b/a;
    int i=1;
    while(i<n)
    {
       i++;
       double m,n;
       cin >> m >> n;
       double d=n/m;
       if((c-d)>0.05)
       {
         cout << "worse" << endl;
       }
       else if((d-c)>0.05)
       {
         cout << "better" << endl;
       }
       else
       {
           cout << "same" << endl;
       }
    }
    cin.get();cin.get();cin.get();
    return 0;
}
