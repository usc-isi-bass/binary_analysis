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
	int i;
	char s1[100],s2[100] ;
	gets(s1);
	gets(s2);
	for(i=0; s1[i]&&s2[i]; i++){
		if (s1[i]>= 'a' && s1[i]<= 'z')
			s1[i]-='a'-'A';
		if (s2[i] >= 'a' && s2[i] <='z')
			s2[i]-='a'-'A';

		if( s1[ i ] > s2[ i ] )
		{	printf(">");
		return 0 ;}
		else
		if( s1[ i ] < s2[ i ] )
		{	printf("<");
		return 0 ;}
		}
	if( s1[ i ] == 0 )
	{
		if ( s2[ i ] == 0 )
			printf("=");
		else
			printf("<");
	}
	else
		printf(">");
	/*
		if(strcmp(s1,s2)==0){
			printf("=");
//			break;
		}
		if(strcmp(s1,s2)<0){
			printf("<");
//			break;
		}
		if(strcmp(s1,s2)>0){
			printf(">");
//			break;

	}
	
*/
	return 0;
}
