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

int PrimeNumber(int p){
    int i; 
    for(i=2;i<=sqrt(p);i++)
    if(p%i==0) 
    return 0;
    return 1;
    }
int main()
{
    int m,j;
    cin>>m;
    for(j=3;j<=m/2;j=j+2)
    {
     if(PrimeNumber(j)&&PrimeNumber(m-j)) cout<<j<<' '<<m-j<<endl;
    
    }

    return 0;
    } 
