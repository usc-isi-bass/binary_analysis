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

char *p,*r;
p=(char*)malloc(30*sizeof(char));
gets(p);

for(r=p;*r!='\0';r++)
if ((*r>57)||(*r<48)) printf("\n");
else printf("%c",*r);

}