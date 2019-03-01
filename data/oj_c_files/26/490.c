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
	char sen[100];
	cin.getline(sen,100);
	for(int i=0;i<strlen(sen);){
		if(sen[i]==' '){
			cout<<' ';
			for(int j=i+1;sen[j]==' ';){
				if(sen[j]==' '){
					j++;
					i++;
				}
			}
			i++;
		}
		else {
			cout<<sen[i];
			i++;
		}
	 }
	return 0;
}