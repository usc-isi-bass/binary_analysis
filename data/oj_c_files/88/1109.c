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

char x[1000];
int main()
{
    int i,len;
    gets(x+1);
    x[0]='0';
    len=strlen(x+1);
    for(i=1;i<=len;i++)
    {
                      if(isn(x[i])&&!isn(x[i-1]))
                      printf("\n");
                      if(isn(x[i]))
                      printf("%c",x[i]);
    }
   //a getch();
    return 0;
}
