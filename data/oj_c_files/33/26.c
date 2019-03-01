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
{	char a[1000],b[100],e[100];

	int n,i,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		for(j=0;a[j]!='\0';j++){
			if(a[j]=='A')printf("T");
			if(a[j]=='T')printf("A");
			if(a[j]=='G')printf("C");
			if(a[j]=='C')printf("G");
		}
		printf("\n");
	}
	
	return 0;
}
