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
	int i,j,b,a;
	char s1[50],s2[50];
	char *ps1=s1,*ps2=s2;
	scanf("%s",s1);
	scanf("%s",s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	for(a=0,b=0;a<l2&&b==0;a+=i+1){
	    for(i=a;*ps1!=*ps2&&*ps1!='\0'&&*ps2!='\0';ps2++,i++);
	    for(j=0,b=1;*ps1!='\0'&&*ps2!='\0';ps1++,ps2++,j++){
			if(*ps1!=*ps2&&(j+1)<l1){
			    b=0; 
				break;
			}
		}
	}
	printf("%d",i);
	return 0;
}
