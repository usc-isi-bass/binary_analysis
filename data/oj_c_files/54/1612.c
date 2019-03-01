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
    int n, k; 
    cin >> n >> k;
    int an = 1;
    for(int i = 0; i < n; i++)
        an = an*n;
    an = an - k*(n-1);
    cout << an;
    return 0;
}
		