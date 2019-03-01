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

int main(){
	int count,number[500],i,p,len,judge;
	char input[1000],name[500];
	gets(input);
	count=0;
	len=strlen(input);
	for(i=0;i<len;i++){name[i]=0;number[i]=0;if(input[i]>96){input[i]-=32;}}
	for(i=0;i<len;i++){
	judge=0;
	if(input[i]==name[count-1]){judge=1;number[count-1]++;}
	if(judge==0){name[count]=input[i];number[count]++;count++;}	
	}
	count--;
	for(i=0;i<=count;i++){printf("(%c,%d)",name[i],number[i]);}
return 0;

}