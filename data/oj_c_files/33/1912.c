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
    int n,i,j,len;
	scanf("%d",&n);
	char DNA[256];
    for(i=0;i<n;i++){
		scanf("%s",DNA);
		len=strlen(DNA);
		for(j=0;j<len;j++){
			if(DNA[j]=='A')
				DNA[j]='T';
			else if(DNA[j]=='T')
				DNA[j]='A';
			else if(DNA[j]=='C')
				DNA[j]='G';
			else if(DNA[j]=='G')
				DNA[j]='C';
		}
		printf("%s\n",DNA);
	}
	return 0;
}
