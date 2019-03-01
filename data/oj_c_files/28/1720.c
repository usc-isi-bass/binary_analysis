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
	char s[6000],a[50];
	gets(s);
	int ls=strlen(s);
	int la;
	int i,j=0;
	int first=1;
	for(i=0;i<ls+1;i++){
		if(s[i]!=' '&&s[i]!='\0'){
			a[j]=s[i];
			j++;
		}
		else{
			a[j]='\0';
			j=0;
			la=strlen(a);
		    if(first==1&&la!=0){
			printf("%d",la);
			first=0;
			}else if(la!=0){
			printf(",%d",la);
			}
		}
	}
		
	return 0;
}