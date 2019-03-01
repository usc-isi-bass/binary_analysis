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
int n,l,s,ln=0,sn=30,i=0;
char a[200][30];
scanf("%d",&n);
while(n--)
{
scanf("%s",a[i]);
if(ln<strlen(a[i]))
{
ln=strlen(a[i]);
l=i;
}
if(sn>strlen(a[i]))
{
sn=strlen(a[i]);
s=i;
}
i++;
}
printf("%s\n%s",a[l],a[s]);
}
