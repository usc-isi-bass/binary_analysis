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
	char s[31];
	int i;

	gets(s);

	for(i=0;i<30;i++){
		if((s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')&&(s[i+1]=='1'||s[i+1]=='2'||s[i+1]=='3'||s[i+1]=='4'||s[i+1]=='5'||s[i+1]=='6'||s[i+1]=='7'||s[i+1]=='8'||s[i+1]=='9'||s[i+1]=='0')){
			printf("%c",s[i]);
		}
		if((s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')&&s[i+1]!='1'&&s[i+1]!='2'&&s[i+1]!='3'&&s[i+1]!='4'&&s[i+1]!='5'&&s[i+1]!='6'&&s[i+1]!='7'&&s[i+1]!='8'&&s[i+1]!='9'&&s[i+1]!='0'){
			printf("%c\n",s[i]);
		}
	}
	
	return 0;
}
