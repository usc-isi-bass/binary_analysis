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
	int i = 0;
	int j = 0;
	int begin;
	int end;
	char now[101];
	char sen[1000];
	char old[101];
	char newone[101];

	gets(sen);
	gets(old);
	gets(newone);
	while(sen[i] != '\0'){
		now[j] = sen[i];
		if(j == 0)
			begin = i;
		if(now[j] == ' ' || sen[i+1] == '\0'){
			
			end = i;
			if(sen[i+1] == '\0')
				now[j+1] = '\0';
			else
				now[j] = '\0';
			if(strcmp(now, old) == 0){
				if(sen[i+1] == '\0')
					printf("%s", newone);
				else
					printf("%s ", newone);

			}
			else{
				if(sen[i+1] == '\0')
					printf("%s", now);
				else
					printf("%s ", now);
			}
			j = -1;
		}
		i++;
		j++;
	}
	printf("\n");
	return 0;
}