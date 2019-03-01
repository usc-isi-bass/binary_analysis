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
	char a[100],b[10][10],c=' ';int i,j=0,l,h=0;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++){if(a[i]!=' ')b[j][h++]=a[i];else {b[j][h]=0;j++;h=0;}}b[j][h]=0;
	printf("%s",b[j]);
	for(i=j-1;i>=0;i--)printf("%c%s",c,b[i]);
	printf("\n");

}