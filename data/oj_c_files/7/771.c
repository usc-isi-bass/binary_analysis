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
 char str[256],sub[256],rep[256],temp[256];
 char* p;
 gets(str);
 gets(sub);
 gets(rep);
 p = strstr(str,sub);
 if(p!=NULL){
  *p = 0;
  strcpy(temp, str);
  strcat(temp, rep);
  strcat(temp, p+strlen(sub));
  strcpy(str, temp);
 }
 printf("%s\n", str);
 return 0;
} 