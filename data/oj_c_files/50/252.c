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
	int n,w;
	scanf("%d",&w);
	if((12%7+w-7==5)||(12%7+w==5)) printf("1\n");
	if((43%7+w-7==5)||(43%7+w==5)) printf("2\n");
    if((71%7+w-7==5)||(71%7+w==5)) printf("3\n");
	if((102%7+w-7==5)||(102%7+w==5)) printf("4\n");
    if((132%7+w-7==5)||(132%7+w==5)) printf("5\n");
	if((163%7+w-7==5)||(163%7+w==5)) printf("6\n");
    if((193%7+w-7==5)||(193%7+w==5)) printf("7\n");
	if((224%7+w-7==5)||(224%7+w==5)) printf("8\n");
    if((255%7+w-7==5)||(255%7+w==5)) printf("9\n");
	if((285%7+w-7==5)||(285%7+w==5)) printf("10\n");
    if((316%7+w-7==5)||(316%7+w==5)) printf("11\n");
	if((346%7+w-7==5)||(346%7+w==5)) printf("12\n");
}
    