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
{ void prt(char a[],int n);
	int n=0;
  char a[31]={'\0'};
  gets(a);
  n=strlen(a);
  prt(a,n);
  getchar();
  getchar();
  return(0);
}
void prt(char a[],int n)
{ int i=0,t=0;
  for(i=0;i<n;i++)
  {  switch (a[i])
   { case '1':
    case '2':
    case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '0':printf("%c",a[i]);t=0;break;
  default:
	  if(i<n-1)
	  {if(t==0) {t=1;printf("\n");}}
	  break;
   }
    
  }

}