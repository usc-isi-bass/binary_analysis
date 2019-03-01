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
    char s[100];
	int flag=1;
    int i;
    gets(s);
   for(i=0;i<strlen(s);i++)
   if(s[i]==' ') flag=0;
   else {if(flag==0) printf(" ");
           printf("%c",s[i]),flag=1;}
    return 0;
}
 