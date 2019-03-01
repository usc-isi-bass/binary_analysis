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

int pseudo_main() 
{ 
	int monkeys, throw_away;
	int apples; 
	int i; 
	scanf("%d %d", &monkeys, &throw_away);
	int last = 0; 
	while(1){
		 last++; 
		 apples = last*monkeys+throw_away;
		int divides = 1;
		for (i=1; (i<monkeys)&&divides;++i) {
			divides = (apples % (monkeys - 1) == 0); 
			apples = apples/(monkeys - 1)*monkeys+throw_away;
		} 
		if(divides) 
			break;
}
	printf("%d\n", apples); 
} 
int main() 
	{ pseudo_main(); }