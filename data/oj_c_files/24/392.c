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
char s[50],max[50],min[50];
while (scanf("%s",s)!=EOF)
{
  if (strlen(s)>strlen(max)) strcpy(max,s);
  if (strlen(s)<strlen(min)) strcpy(min,s); 
}
printf("%s\n%s",max,min);
return 0;
}