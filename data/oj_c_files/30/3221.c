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
	int i=1;
    int s=0;
    int n;
    scanf("%d",&n);
    while (i<=n) {
         if (((i%7))&&(!(i%10==7))&&(!(i/10==7))) {
		//if ((i%7)||(i%10-7)||(i/10-7)) {
                                         s=s+i*i;
										// printf("%d\n",i);
                                         }
                                         i++;
                                         }

    printf("%d",s);
	return 0;
}