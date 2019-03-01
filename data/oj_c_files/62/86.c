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
 char str[1000]={""};
 gets(str);
 int len=strlen(str);
 int i;
 for(i=0;str[i]!='\0';i++)
 {
  int j=i;
  if(str[i]==' ')
  {
  i++;
  while(i<len)
  {
   if(str[i]==str[i-1])
   i++;
   else
   {i--;break;}
  }
  }
  printf("%c",str[j]);

 }
}