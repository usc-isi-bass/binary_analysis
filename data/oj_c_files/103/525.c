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

char a[500];
void main()
{
	char mark;
	int i,sum=0,flag;
	gets(a);
for(i=0;a[i]!=0;i++)
if(a[i]>='a'&&a[i]<='z')a[i]+='A'-'a';
	mark=a[0];
	for(i=0,flag=0;a[i]!=0;i++){
		if(a[i]!=mark){
			printf("(%c,%d)",mark,sum);
			sum=1;
			mark=a[i];
		}
		else sum++;
	}
	printf("(%c,%d)",mark,sum);
}