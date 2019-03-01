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
int q;
scanf("%d",&q);
if(q==7)
{printf("1\n");
printf("10");}
if(q==2)
{printf("9\n");
printf("12");}
if(q==4)
{printf("2\n");
printf("3\n");
printf("11\n");}
if(q==5)printf("8\n");
if(q==3)printf("6\n");
if(q==1)
{printf("4\n");
printf("7");}
if(q==6)printf("5");
}