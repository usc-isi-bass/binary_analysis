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


int prime(int k);

int main()
{
    int n;
    cin>>n;
    
    for (int i=2;i<=n/2;i++)
       if (prime(i)&&prime(n-i)) cout<<i<<' '<<n-i<<endl;
    
}

int prime(int k)
{
    if (k==2) return 1;
    for (int i=2;i<=k/2;i++) 
    if (k%i==0) return 0;
    return 1;
}
