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
char s[101],t[101];
int i,j=1,n;
gets(s);
t[0]=s[0];
for(i=1;s[i]!='\0';i++)
{
if(s[i]==' '&&s[i+1]==' ')
continue;
else

{
t[j]=s[i];j++;
}
}
t[j]='\0';
printf("%s",t);
return 0;
}