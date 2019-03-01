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
{	int i;
	scanf("%d",&i);

	while (i%3==0&&i%5==0&&i%7==0) {printf("3 5 7");break;}
	while (i%3==0&&i%5==0&&i%7!=0) {printf("3 5"); break;}
	while (i%3!=0&&i%5==0&&i%7==0) {printf("5 7");break;}
	while	(i%3==0&&i%5!=0&&i%7==0) {printf("3 7");break;}
	while	(i%3!=0&&i%5!=0&&i%7==0) {printf("7"); break;}
	while (i%3!=0&&i%5==0&&i%7!=0) {printf("5"); break;}
	while (i%3==0&&i%5!=0&&i%7!=0) {printf("3"); break;}
    if (i%3!=0&&i%5!=0&&i%7!=0) printf("n");

}
