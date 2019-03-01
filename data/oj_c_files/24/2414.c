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
  char s[20],min[20],max[20];
  char c;
  strcpy(min,"1111111111111111111");
  max[0]='\0';  
  while(1)
    {
        scanf("%s",s); 
        if(strlen(min)>strlen(s)) strcpy(min,s);  
        if(strlen(max)<strlen(s)) strcpy(max,s);
        c=getchar();  if(c=='\n') break;
    } 
  printf("%s\n",max);
  printf("%s\n",min);
}