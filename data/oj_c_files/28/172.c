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

char str[1000];
int main(){
	char c;
	int i=0;
	while((c=getchar())!='\n'){
		str[i]=c;
		i++;
	}
	str[i]='\0';
	int len=i;
	int count=0;
	int num=0;
	for(i=0;i<=len;i++){
		if (str[i]==' '||str[i]=='\0'){
			if (count==0) continue;
			if (num==0){
			cout<<count;
			num++;
			}
			else
			{cout<<","<<count;
			}
			count=0;
			continue;
		}
		count++;
	}
	cout<<endl;

	return 0;
}

