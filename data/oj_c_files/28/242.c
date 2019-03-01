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
	char test='1',*p;
	//int word[300]={0};
	int i=0;
	//char *q=p;
	while(1){
		while(test !='\n' && test==' ')
			test=getchar();
		int count=0;
		while(test !='\n' && test!=' ' && test!=0){
			test=getchar();
			count++;
		}
		if(i==0)
			count--;
		
		printf("%d",count);
		if(test!='\n')
			printf(",");
		else break;
		i++;
	}
	return 0;
}  