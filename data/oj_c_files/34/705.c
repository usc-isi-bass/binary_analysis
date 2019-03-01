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

void Try(int); 
int main()
{
    int n;
    cin >> n;
    Try (n);
    cout << "End" << endl; 
    return 0;
}
void Try(int i)
{
     while (i != 1)
     {
             if (i % 2 == 0)
             {
                   cout << i << "/2=" << i / 2 << endl;
                   i = i / 2;
             }
             else
             {
                 cout << i  << "*3+1=" << i * 3 + 1<< endl;
                 i = i * 3 + 1;
             }
     }
}  
   