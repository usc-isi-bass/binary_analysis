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
{
	char a[100][100];
	int i;
	for(i=0;;i++)
	{
		scanf("%s",&a[i]);
		if(getchar()=='\n')
			break;
	}
	for(int j=0;j<i;j++)
	{
		printf("%s ",a[i-j]);
	}
	printf("%s",a[0]);\
	return 0;



	
}
