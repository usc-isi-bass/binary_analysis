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
{char c[100]={' '};
 int i,j,k,l,n,m;
 gets(c);
 l=strlen(c)-1;
 for (i=0;i<l;i++)
	 printf("%c",c[i]+c[i+1]);
 printf("%c",c[l]+c[0]);
 return 7;
}