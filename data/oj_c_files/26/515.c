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
    char str[101];
    cin.getline(str,100);
    for(int i=0;i<strlen(str)-1;i++)
    {
            if(str[i]!=' ')  cout<<str[i];
            else  if((str[i]==' ')&&(str[i+1]!=' '))
            {
                          cout<<str[i];
            }
            else  continue;
    }
    cout<<str[strlen(str)-1]<<endl;
    return 0;
}
