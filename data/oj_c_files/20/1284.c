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
	char str[20],substr[4],temp[20];
	while(scanf("%s%s",str,substr)!=EOF){
	int len=strlen(str);
	char max=str[0];
	int a,i;
	for(i=0;i<len;i++){
		if(str[i]>max) {
			max=str[i];
			a=i;
		}
	}

	int num=0;
	for(i=a+1;i<len;i++){
	temp[num]=str[i];
	num++;}
	temp[num]='\0';
	str[a+1]='\0';

	strcat(str,substr);
	strcat(str,temp);
	printf("%s\n",str);
	}

	return 0;
}

