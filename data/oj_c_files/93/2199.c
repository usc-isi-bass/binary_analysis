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
    int n, a, b, c;
    
    cin >> n;
    
    a = n%3;
    b = n%5;
    c = n%7;
    
    if(!a && !b && !c) 
    {
        cout << 3 << " " << 5 << " " << 7;
    }
    else if(!a && !b) 
    {
        cout << 3 << " " <<5;
    }
    else if(!a && !c) 
    {
        cout << 3 << " " << 7;
    }
    else if(!b && !c) 
    {
        cout << 5 << " " << 7;
    }
    else if(!a) 
    {
        cout << 3;
    }
    else if(!b) 
    {
        cout << 5;
    }
    else if(!c) 
    {
        cout << 7;
    }
    else cout << 'n';
    
    return 0;
}
