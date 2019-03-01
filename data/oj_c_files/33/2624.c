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
	int n;
	char c;
	scanf("%d",&n);
	getchar();
	for(;n>0;n--){
		c=getchar();
		while(c!='\n'){
			switch(c){
			case 'A': putchar('T');break;
			case 'T': putchar('A');break;
			case 'C': putchar('G');break;
			case 'G': putchar('C');break;
			default: break;
			}
			c=getchar();
		}
		putchar('\n');
	}
}