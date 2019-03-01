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
	char words[200],a[100],b[100],word[100][100];
	int n,k,j=0,i;
	gets(words);
	gets(a);
	gets(b);
	n=strlen(words);
    for(i=0,k=0;i<n+1;i++){
		if(words[i]==' '||words[i]=='\0'){
           word[k][j]='\0';
		   k++;
		   j=0;
		}
		else{
           word[k][j]=words[i];
		   j++;
		}
	}

    for(i=0;i<k-1;i++){
		if(strcmp(word[i],a)==0)
			printf("%s ",b);
		 else printf("%s ",word[i]);
	}
  
   	if(strcmp(word[i],a)==0)
		printf("%s",b);
    else printf("%s",word[i]);
	return 0;
}