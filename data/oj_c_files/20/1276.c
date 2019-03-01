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

int max(char str[],int i,int l)
{
	int o;
	for(o=0;o<l;o++)
		if(str[o]>str[i]) return 0;
	return 1;
}
void main()
{   
	char str[11],substr[4];
	while(scanf("%s %s",str,substr)!=EOF){
	int l;
	l=strlen(str);
	int i;
	for(i=0;i<l;i++)
		if(max(str,i,l)==1) break;
	int j,k;
	for(j=0;j<=i;j++)
		printf("%c",str[j]);
	for(k=0;k<3;k++)
		printf("%c",substr[k]);
	for(j=i+1;j<l;j++)
		printf("%c",str[j]);
	printf("\n");

}}		

				

