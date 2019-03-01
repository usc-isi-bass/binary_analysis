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

int tree(int i,int j)
{
    if(i==j) return i;
    if(i>j)
    {
        return tree(i/2,j);   
    }
    if(i<j)
    {
        return tree(j,i);   
    }
    
}
int main()
{
    int i,j;
    cin>>i>>j;
    cout<<tree(i,j);
    return 0;
}
