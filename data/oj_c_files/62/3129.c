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
	char m[10000];
	char *pointer;
	int len,i,flag=0,j;
	cin.getline(m,10000);
	pointer=&m[0];
	len=strlen(m);
	for(i=0;i<len;i++){
		if(*pointer==' '&&flag==0){
			flag=1;
			pointer++;
		}
		else if(*pointer==' '&&flag==1){
			for(j=i;j<len-1;j++)
				m[j]=m[j+1];
			m[len-1]='\0';
			len--;
			i--;
		}
		else{
			flag=0;
			pointer++;
		}
	}
	cout<<m;
	return 0;
}