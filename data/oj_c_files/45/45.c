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
	int c;
	char a[51],b[51];
	scanf("%s %s",a,b);
	for(int i=0;b[i]!='\0';i++)
	{
		if(a[0]==b[i])
		{
			c=i;
			break;
		}
	}
	printf("%d",c);
	return 0;
}