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
    char a[40];
    int i=0;
    cin.getline(a,40);
    while(a[i]!='\0')
    {
       if((a[i]-'0')>=0&&(a[i]-'0'<=9)) cout<<a[i];
       else
       {
           if((a[i+1]-'0')>=0&&(a[i+1]-'0'<=9)) cout<<endl;
       }
       i++;
    }
    return 0;
}