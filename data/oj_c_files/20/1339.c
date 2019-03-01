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
int i,j,n,mark;
char s1[11],s2[4];
while(scanf("%s%s",s1,s2)!=EOF)
{
n=strlen(s1);
for(i=0;i<n;i++)
{
for(j=0,mark=1;j<n;j++)
{
if(s1[i]<s1[j])
{
mark=0;
break;
}
}
if(mark)
{
for(j=0;j<=i;j++)
printf("%c",s1[j]);
printf("%s",s2);
for(j=i+1;j<n;j++)
printf("%c",s1[j]);
printf("\n");
break;
}
}
}
return 0;
}
