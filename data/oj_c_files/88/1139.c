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
    char a[35];  //????? 
    cin.getline(a,35);
    int len=strlen(a);
    char *p1=a;  //??????????? 
    char *p2=a;
    while(p1<a+len)
    {
        if(*p1>='0'&&*p2<='9')
        {
            while(*p2>='0'&&*p2<='9')   p2++;
            *p2=0;   // ??0 
            cout<<p1<<endl;
            p1=p2;  //???? 
        }
        else
        {
            p1++;  
            p2=p1;
        }
    }
    return 0; 
}
