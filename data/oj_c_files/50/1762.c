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
{int i=1;
	int n,w;
	scanf("%d",&w);w+=12;
	if(w%7==5)printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)printf("%d\n",i);i++;
	w+=28;
	if(w%7==5)printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)printf("%d\n",i);i++;
	w+=30;
	if(w%7==5)printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)printf("%d\n",i);i++;
	w+=30;
	if(w%7==5)printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)printf("%d\n",i);i++;
	w+=31;
	if(w%7==5)printf("%d\n",i);i++;
	w+=30;
	if(w%7==5)printf("%d",i);i++;
	w+=31;
	if(w%7==5)printf("%d\n",i);i++;
	w+=30;
	if(w%7==5)printf("%d\n",i);i++;}