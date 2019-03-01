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
	char a[100],b[100],c[100];
	gets(a);
	gets(b);
	gets(c);
	//printf("%s %s %s",a,b,c);
	for(int i = 0;i < strlen(a);i ++){
		if(a[i] == b[0] && (a[i-1] == ' ' || i == 0)  && (a[i+strlen(b)] == ' ' || i + strlen(b) == strlen(a))){
			int check = 0;
			for(int j = 0;j < strlen(b);j ++){
				if(a[j+i] != b[j]){
					check = 1;
					break;
				}
			}
			if(check == 0){
				printf("%s",c);
				i +=strlen(b) - 1;
				continue;
			}
		}
		printf("%c",a[i]);
	}
			
				return 0;
}
