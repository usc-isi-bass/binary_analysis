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
{int i,j,k;
char ch[100];
gets(ch);
for(i=0;;i++)
{if(ch[i]=='\0') break;}
for(i=i-1,j=0;i>=0;i--)
{if(ch[i]==' ') {for(k=i+1;k<=i+j;k++) printf("%c",ch[k]);printf("%c",ch[i]);j=0;}
else if(i==0)  {for(k=i;k<=i+j;k++) printf("%c",ch[k]);break;}
else j++;}
}