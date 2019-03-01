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

void main()
{
	int i,j,k,p;
 char s[100],c[100],a[100];
 gets(s);
 gets(c);
 gets(a);
 k=strlen(s);
 p=strlen(c);
 for(i=0;i<k;i++)
 {
	 j=0;
	 for(j=0;j<p;j++,i++)
	 {
		 if(s[i]!=c[j])
		 break;
	 }
	 if(j>p-1)
	 {
	  for(j=0;j<p;j++,i++)
      s[i-p]=a[j];
	  break;
	 }
 }
	 for(i=0;i<k;i++)
		 printf("%c",s[i]);
}
