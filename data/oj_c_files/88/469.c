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
char a[31];
char *p=a;
cin.getline(a,31);
for(;*p!='\0';p++)
if(*p>=48&&*p<=58)
{
cout<<*p;
if(*(p+1)<48||*(p+1)>58)cout<<endl;
}
return 0;
}