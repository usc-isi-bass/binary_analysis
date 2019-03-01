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
	char zfc[3000],danci[50][50]={'0'};
	int i,j,k;
	gets(zfc);
	for(i=0,j=0,k=0;zfc[i]!='\0';i++){
		if(zfc[i]==' '){
			zfc[i]='\0';
			strcpy(danci[j],(zfc+k));
			k=i+1;
			j++;
		}
		
	}
	strcpy(danci[j],(zfc+k));
	j++;
	int max=strlen(danci[0]),min=strlen(danci[0]);
	char chang[50],duan[50];
	strcpy(chang,danci[0]);
	strcpy(duan,danci[0]);
	for(i=0;i<j;i++){
		if(strlen(danci[i])>max){
			max=strlen(danci[i]);
			strcpy(chang,danci[i]);
		}if(strlen(danci[i])<min){
			min=strlen(danci[i]);
			strcpy(duan,danci[i]);
		}
	}
	printf("%s\n%s\n",chang,duan);
	return 0;
}