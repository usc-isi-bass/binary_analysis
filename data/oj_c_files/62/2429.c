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
{ int j=0,i;
 char a[1000],b[1000],c;
 for(i=0;i<=1000;i++)
	 {c=getchar();
	 a[i]=c;
     if(c=='\n') break;
     }
 for(i=0;i<=1000;i++)
	 {if(a[i]!=' '){b[j]=a[i];j++;}
	  if(a[i]==' '&&a[i-1]!=' '){b[j]=a[i];j++;}
	  if(a[i]=='\n'){ b[j]=a[i];break;}
	  else continue;
     }
 for(i=0;i<=j;i++)
 {cout<<b[i];}
 return 0;
}