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
{int h;scanf("%d",&h);if((h+12)%7==5)printf("1\n");if((h+43)%7==5)printf("2\n");if((h+71)%7==5)printf("3\n");if((h+102)%7==5)printf("4\n");if((h+132)%7==5)printf("5\n");if((h+163)%7==5)printf("6\n");if((h+193)%7==5)printf("7\n");if((h+224)%7==5)printf("8\n");
if((h+255)%7==5){printf("9\n");}
if((h+285)%7==5){printf("10\n");}
if((h+316)%7==5){printf("11\n");}
if((h+346)%7==5){printf("12\n");}
}