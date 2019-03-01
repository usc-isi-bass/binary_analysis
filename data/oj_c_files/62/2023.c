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

char a[100];
int i;
void sf()
{
     int l = strlen(a);
     char *p = a;
     for(p = a, i = 0; i < l; p++, i++)
     {
             if(*p!=' '||(a[i]==' '&& *(p + 1)!=' ')) 
             {
                 cout << a[i] ;
             }
     }
     return ;
}     
int main()
{
    cin.getline(a,100);
    sf();
    cin >> a;
    return 0;
}
    
