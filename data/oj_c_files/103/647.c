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
int x,y=0;
char a[999];
gets(a);
for(;a[y]!='\0';y++)
{
x=1;
for(;;y++)
{
if(a[y]==a[y+1]||(a[y]-a[y+1])==('A'-'a')||(a[y+1]-a[y])==('A'-'a'))
x++;
else
break;
}
if(a[y]<'Z')
printf("(%c,%d)",a[y],x);
else
printf("(%c,%d)",(a[y]+'A'-'a'),x);
}

}
