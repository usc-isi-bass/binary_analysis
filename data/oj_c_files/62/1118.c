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
char s[100][100];
char s1[100];
int i,t;
int j=0,p=0;
gets(s1);
for(i=0;i<=strlen(s1);i++)
{
if((s1[i]==' '&&s1[i+1]==' ')||(s1[i]==' '&&s1[i+1]!=' '))
continue;
s[j][p]=s1[i];
p++;
if(s1[i+1]==' '&&s1[i]!=' ')
{j++;
p=0;
}
}
for(t=0;t<=j-1;t++)
{
printf("%s ",s[t]);
}
printf("%s",s[j]);
return 0;
}
