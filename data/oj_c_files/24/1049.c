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
char str[100];

gets(str);
int maxlen=0;
int minlen=9999;
char*maxstr=0;
char*minstr=0;
char*p=strtok(str," ");
while(p)
{
int len=strlen(p);
if(len>maxlen)
{
maxlen=len;
maxstr=p;
}
if(len<minlen)
{
minlen=len;
minstr=p;
}
p=strtok(0," ");
}
printf("%s\n",maxstr);
printf("%s\n",minstr);
return 0;
}