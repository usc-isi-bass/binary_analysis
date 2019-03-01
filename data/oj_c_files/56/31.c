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


int main(int argc, char* argv[])
{
    int x,y=0;
	scanf("%d",&x);	
	while(x>0){
		y=(y+x%10)*10;
		x=x/10;
	}
	y=y/10;
	printf("%d\n",y);
	return 0;
}
