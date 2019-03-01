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
	char c[50],p[50];
	int k;
	scanf("%s%s",c,p);
	int i=0,j;
	for(j=0;j<50;j++){
		if(c[i]==p[j])
		{	k=j;
		break;}
	}
	printf("%d",k);
	return 0;
}
