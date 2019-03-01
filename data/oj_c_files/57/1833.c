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
int n,k,i;
char word[50][100];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s",word[i]);}
for(i=0;i<n;i++){
	if((word[i][strlen(word[i])-2]=='e')||(word[i][strlen(word[i])-2]=='l')){
word[i][strlen(word[i])-2]='\0';
}
	else{word[i][strlen(word[i])-3]='\0';}}
for(i=0;i<n;i++){
	printf("%s\n",word[i]);}

	return 0;
		
	}
