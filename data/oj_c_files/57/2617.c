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
	int i,j,n,m;
	char word[20];

	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%s",word);
		m=strlen(word);
		if(((word[m-1]=='r')&&(word[m-2]=='e'))||((word[m-1]=='y')&&(word[m-2]=='l'))){
			m-=2;
		}
		else if((word[m-1]=='g')&&(word[m-2]=='n')&&(word[m-3]=='i')){
				m-=3;
		}
		
		for(j=0;j<m;j++){
			printf("%c",word[j]);
		}
			printf("\n");
	}
	return 0;
}
