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

int num=0;
int sol(int M,int N)
{
     if (N==1||M==0||M==1)
         return 1;
     else if (M>=N)
         return sol(M,N-1)+sol(M-N,N);
     else
         return sol(M,N-1);
}    
int main()
{
     int t, i, M, N;
     cin >> t;
     for (i=1;i<=t;i++)
     {
         cin >> M >> N;
         cout << sol(M, N) << endl;
     }
     return 0;
}
