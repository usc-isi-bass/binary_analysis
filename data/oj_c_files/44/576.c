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


int kobe(int n)
{
    int i=0,bj=1;
    for (i=0;i<n;i++)
        bj*=10;
    return bj;
}



int reverse(int num)
{
    int i=0,j=0,x=0,rev=0,a[100];
    if (num==0)
        return 0;
    while (num !=0)
    {
        a[i] = num%10;
        num /=10;
        j++;
        i++;
        x++;


    }
    j-=1;
    for (i=0; i<x; i++)
    {
        rev += a[i]* kobe (j);
        j--;

    }


    return rev;
}


int main()
{
    int n;
    while (cin >> n)
    cout << reverse(n) <<endl;
    return 0;
}

