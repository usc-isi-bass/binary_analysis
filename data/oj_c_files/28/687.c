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
    char str[1000];
    char zfc[300][20];
    int sum[300];

    gets(str);

    int i,k,l;
    int m,j=0,n=0;



    for(i=0;str[i]!='\0';i++)
    {
	    if(str[i]==' ')
		{
           str[i]='\0';
	       strcpy(zfc[n],(str+j));
           n++;
           j=i+1;
		}
	}
    strcpy(zfc[n],(str+j));
    n++;

    for(k=0;k<n;k++){
		sum[k]=strlen(zfc[k]);
	}

	printf("%d",sum[0]);

	for(k=1;k<n;k++)
	{
		if(sum[k]!=0){
		printf(",%d",sum[k]);
		}
	}
	return 0;
}




