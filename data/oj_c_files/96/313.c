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
char a[105];
gets(a);
int i,b,c;
if(a[1]=='\0')
{
b=a[0]-'0';
c=0;
printf("%d\n",c);
printf("%d",b);
}
else
{
if(a[2]=='\0')
{
b=((a[0]-'0')*10+(a[1]-'0'))%13;
c=((a[0]-'0')*10+(a[1]-'0'))/13;
printf("%d\n",c);
printf("%d",b);
}
else
{
b=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0'))%13;
c=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0'))/13;
printf("%d",c);
for(i=3;a[i]!='\0';i++)
{
c=(b*10+(a[i]-'0'))/13;
b=(b*10+(a[i]-'0'))%13;
printf("%d",c);
}
printf("\n");
printf("%d",b);
}
}
}
