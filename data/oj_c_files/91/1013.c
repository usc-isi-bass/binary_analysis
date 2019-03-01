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
{void qp(char *p,int n);
char a[105];int l;gets(a);l=strlen(a);
qp(a,l);printf("%c\n",a[0]+a[l-1]);
}
void qp(char *p,int n)
{if(n>=2){printf("%c",*p+p[1]);n--;
qp(p+1,n);}}
