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
char s[100],a[100],b[100],r[50][20]={0},t[100];
int i=0,j,c=0,l;
gets(s);
gets(a);
gets(b);
l=strlen(s);
while(i<=l-1)
{j=0;
c++;
while(s[i]!=' '&&i<=l-1)
{r[c][j]=s[i];
j++;
i++;}
i++;}
for(i=1;i<=c-1;i++)
{if(strcmp(r[i],a)==0)
{printf("%s ",b);}
else 
{printf("%s ",r[i]);}}
if(strcmp(r[c],a)==0)
{printf("%s",b);}
else 
{printf("%s",r[c]);}
return 0;
}