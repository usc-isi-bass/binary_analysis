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

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",n/100,(n%100)/50,(n%50)/20,(n%50-((n%50)/20)*20)/10,(n%10)/5,n%5);
	return 0;
}