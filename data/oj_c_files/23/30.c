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
  char *p,s[200],l,i;
  p=s;
  gets(p);
  l=strlen(p);
  for(i=l+1;i>=0;i--)
  { 
	  if(*(p+i)==' ')
	  {printf("%s ",p+i+1);
	  *(p+i)='\0';}
  
  }
  printf("%s",p);

}