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
 	char zfc[1000],s[1000];
 	int length,i,num=0;
 	gets(zfc);
 	length=strlen(zfc);
 	for(i=0;i<length;i++){
		if(i==0){
			s[num]=zfc[i];
			num++;
			}
		else{
			if(zfc[i]!=' '||(zfc[i]==' '&&zfc[i-1]!=' '))
			{
				s[num]=zfc[i];
				num++;
				}
			}
		}
	for(i=0;i<num;i++){
		printf("%c",s[i]);
		}
    return 0;
}