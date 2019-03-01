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
    char s[101],s1[101];
int i;
gets(s);
for(i=0;;i++)
{
if(s[i+1]!='\0')
(*(s1+i))=(*(s+i))+(*(s+1+i));
else
{
(*(s1+i))=(*(s+i))+(*s);
*(s1+i+1)='\0';
break;
}
}
printf("%s",s1);
return 0;

}
