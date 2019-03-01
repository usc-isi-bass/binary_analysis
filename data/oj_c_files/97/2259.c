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

int aa[6]={100,50,20,10,5,1};
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<7;i++)
    {
            int s=x/aa[i];
            cout<<s<<endl;
            x=x%aa[i];
    }
    return 0;
}
    
