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
	char str[31];
	gets(str);
	int i=0;
	int num=0;
	while(str[i]!='\0'){
		if(str[i]>='0'&&str[i]<='9'){
			num=num*10+(str[i]-'0');
			if(!(str[i+1]>='0'&&str[i+1]<='9')||str[i+1]=='\0'){
				cout<<num<<endl;
				num=0;
			}
		}
		i++;
	}
	return 0;
}