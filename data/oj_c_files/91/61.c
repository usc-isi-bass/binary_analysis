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
	char a[101],b[101];
	int i,len;
	gets(a);
	len=strlen(a);
	for(i=0;i<len-1;i++){
	*(b+i)=*(a+i)+*(a+i+1);
	}
	*(b+len-1)=*(a+len-1)+*(a+0);
	for(i=0;i<len;i++){
	printf("%c",*(b+i));
	}
	return 0;
}
