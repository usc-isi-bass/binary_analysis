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
    char str[99];//??????
    gets(str);
    for(int i=0;i<strlen(str);i++)
       if(str[i]==32)//??????
		   while(str[i+1]==32)//????????
                             for(int k=i+1;k<strlen(str);k++)
			  str[k]=str[k+1];//??????????
    cout<<str;
    return 0;
}