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

main()
{
    char a[1000];
    int b=0,i=0;
    scanf("%s",a);
    while(a[i]!='\0')
         {
             b=b*10+a[i]-'0';
             a[i]='0'+b/13;
             b=b%13;
             i++; }
    if(a[1]=='\0') printf("0");
    else if(a[1]=='0')
    {
           if(a[2]!='\0') printf("%s",&a[2]);
           else printf("0");
    }
    else printf("%s",&a[1]);
    printf("\n%d",b);
}


