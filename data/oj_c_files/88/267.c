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
	char str[40];
	int len,i,num=0;
	gets(str);
	len=strlen(str);
	for(i=0;i<=len-1;i++){
		if(str[i]>=48&&str[i]<=57){
			printf("%c",str[i]);
		}else if(i>0&&str[i-1]>=48&&str[i-1]<=57){
			printf("\n");
	        num+=1;
		}
		
	}
	if(str[len-1]>=48&&str[len-1]<=57){
			num+=1;
	}

	return 0;
}
