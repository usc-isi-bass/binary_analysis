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
	char a[100],b[100];
	int i,j;
	gets(a);
	gets(b);
	for(j=0;a[j]!='\0';j++){
		for(i='a';i<='z';i++){
		if(a[j]==i)
			a[j]=i-'a'+'A';
		}
	}
	for(j=0;b[j]!='\0';j++){
		for(i='a';i<='z';i++){
		if(b[j]==i)
			b[j]=i-'a'+'A';
		}
	}
	if(strcmp(a,b)>0)
	printf(">");
	if(strcmp(a,b)<0)
	printf("<");
	if(strcmp(a,b)==0)
	printf("=");
	return 0;
}

