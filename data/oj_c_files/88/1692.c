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
char str[1000];
while(cin>>str)
{for(int i=0;i<strlen(str);i++)
{
if((str[i]>='0')&&(str[i]<='9')) cout<<str[i];
else cout<<endl;
}
}
return 0;
}

