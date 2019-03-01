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
char string[101];
scanf("%s",string);
int len=strlen(string);
int i;
int a[100]={0};
int num=0,j;
for(i=0;i<len;i++){
	if(string[i]==string[0]) {
		a[num]=i;
		num++;}
	if(string[i]!=string[0]){
		for(j=num-1;j>=0;j--){
			if(a[j]!=-1) {
				printf("%d",a[j]);
				a[j]=-1;
				break;
			}
		}
		printf(" %d\n",i);
	}
	
}


	return 0;
}