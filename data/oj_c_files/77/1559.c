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
	char str[110];
	cin>>str;
	int length;
	length=strlen(str);
	int i,j,k=0;
	char b,g;
	b=str[0];
	for(i=0;i<length;i++){
		if(str[i]!=b){
			g=str[i];
			break;
		}
	}
	while(1){
		if(str[0]==' '){
			break;
		}
		for(i=1;i<length;i++){
			if(str[i]==g){
				j=i-1;
				while(str[j]==' '){
					j--;
				}
				if(str[j]==g){
					break;;
				}
				else if(str[j]==b){
					cout<<j<<" "<<i<<endl;
					str[i]=' ';
					str[j]=' ';
					break;
				}
			}
		}
	}
	return 0;
}