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



int islegal(char seq[],int size)
{
	int i,flag=1; char*ptr;
	ptr=seq;
	if(*ptr=='_'||isalpha(*ptr)!=0){
		for(i=1;i<size;i++){
			ptr=ptr+sizeof(char); 
			if(*ptr!='_'&&isalpha(*ptr)==0
				&&isdigit(*ptr)==0){
				flag=0;break;
			}
		}
	}else{
		flag=0;}
	return flag;	
}

int main()
{
	int n,i,len;
	char zfc[80000];
	gets(zfc);
	n=atoi(zfc);
	for(i=0;i<n;i++){
		gets(zfc);
		len=strlen(zfc);
		printf("%d\n",islegal(zfc,len));
	}
	return 0;
}