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

// &micro;&yen;&acute;&Ecirc;&micro;&Auml;&sup3;¤&para;&Egrave;&micro;&Uacute;&para;&thorn;&micro;&macr;.cpp : Defines the entry point for the console application.
//

int main(int argc, char* argv[])
{
	char ju[10000];
	int i,a,num,pan=0;
	gets(ju);
	a=strlen(ju);
	i=0;
	num=0;
	while(i<a-1){
		if(ju[i]==' '){
			printf("%d",num);
			pan=1;
			i++;
			num=0;
			break;
		}else{
			num++;
			i++;
		}
	}
	while(i<a-1){
		if(ju[i-1]!=' '&&ju[i]==' '){
			printf(",%d",num);
			i++;
			num=0;
		}else if(ju[i]!=' '){
			num++;
			i++;
		}else i++;
	}
	if(pan==1)printf(",%d\n",num+1);
	else printf("%d\n",num+1);
	return 0;
}

