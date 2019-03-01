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
char s[100] = {0};
int i,len;

gets(s);

len = strlen(s);
i = 1;
printf("%c",s[0]);
while(s[i]!=0)
{
if(s[i]!=' ')
printf("%c",s[i]);
if(s[i-1]!=' '&& s[i]==' ') 
printf(" ");
i++;
}



}