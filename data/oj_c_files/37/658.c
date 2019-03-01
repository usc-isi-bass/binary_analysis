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
	char word[100000 + 1],h;
	int t , i , j , k;
	int n ,  min , p ;
	scanf("%d",&t);

	for( i = 1 ; i <= t ; i ++)
	{   
		memset(word,0,sizeof(word));
		if( i == 1 ) h = cin.get();
		cin.getline(word,100000);	
                int flag[2][30] ={0};
		p = 0 ;
		min = 30 ;
		
		for( j = 0 ; word[j] != '\0' ; j ++)
		{
			n = word[j] - 'a';
			flag[0][n] ++    ; 
			flag[1][n] = j ;
		}
		
		for( k = 0 ; k <= 25 ; k ++)
			if(flag[0][k] == 1)
			{	
				p = 1;
				if( min > flag[1][k]) 
					min = flag[1][k];
			}

		if( p == 1)
			printf("%c\n",word[min]);
		else 
			printf("no\n");
	}
	return 0;

}
		

				

		
		

			
			

    
