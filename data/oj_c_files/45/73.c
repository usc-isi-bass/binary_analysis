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
    int i,j,l,count=0;
	char y[50],x[50];
	scanf ("%s",x);
	scanf ("%s",y);
	l=strlen(x);
    for (i=0,j=0;i<l;){
		if (x[i]==y[j]){
			i++;
			j++;
		}
		else {
			j++;
			count++;
		}
	}
    printf("%d",count);
	
	return 0;
}
