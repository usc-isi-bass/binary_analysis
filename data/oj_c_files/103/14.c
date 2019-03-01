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
char s[1000];
int a[1000],i;
scanf("%s",s);
for(i=0;i<strlen(s);i++)
if(s[i]>='a'&&s[i]<='z')
s[i]=s[i]-'a'+'A';
for(i=0;i<strlen(s);i++)
a[i]=1;
for(i=1;i<strlen(s);i++)
if(s[i]==s[i-1])
a[i]=a[i-1]+1;
for(i=0;i<strlen(s);i++)
if(s[i]!=s[i+1])
printf("(%c,%d)",s[i],a[i]);
}
