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

int print(char str[],int i,int j){
	int t,I=i,J=j;
	while(str[i]==str[j]&&j>=i){
		i++;
		j--;
	};
	if(j<i)
	{	for(t=I;t<=J;t++) printf("%c",str[t]);
		printf("\n");
	}
	return 0;
}
void main(){
	char str[501];
	int i,j,len;
	gets(str);
	len=strlen(str);
	for(i=1;i<len;i++)
		for(j=i;j<len;j++)
			print(str,j-i,j);
}