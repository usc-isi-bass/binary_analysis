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

void jiaogu(int); 
int main()
{
    int n; 
    cin >> n;
    jiaogu(n);
    return 0;
}
void jiaogu(int a)
{
     int i, j;
     while(a != 1)
     {
             if(a % 2 ==0)
             {
                  i = a / 2;
                  cout << a << "/2=" << i << endl;
                  a = a / 2;
             }
             else
             {
                 j = a * 3 + 1;
                 cout << a << "*3+1=" << j <<endl;
                 a = a * 3 + 1;
             }
     }
     cout << "End" << endl;
}