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
	int i , n , j , l , c = 0;
	char word[100000][20];
	scanf( "%d" , &n );
	for(i = 0 ; i <= n - 1 ; i++){
		scanf("%s" , word[i]);
	}
	for(i = 0 ; i <= n - 1; i++){
		printf("%s" , word[i]);
		l = strlen(word[i]);
		j = strlen(word[i+1]);
		c = c + l + 1;
		//	printf("\n%d %d %d" , l , j , c);
		if( c + j > 80) {
			printf("\n");
			c = 0 ;
		}
		else if( i == n - 1 ) printf("\n");
		else printf(" ");
	}

	return(0);
}
