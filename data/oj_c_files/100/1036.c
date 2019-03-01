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
    char str[500];
	int k,i;
	char chr;
	int num,you=0;

	gets(str);

	for(k=97;k<123;k++){
		chr=k;
		num=0;

		for(i=0;i<strlen(str);i++){	
			if(str[i]==k){num++;you=1;}
		}
			if(num!=0){printf("%c=%d\n",chr,num);}	
	
    }
	if(you==0){printf("No");}
	return 0;
}