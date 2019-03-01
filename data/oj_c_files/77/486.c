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

char c[1000],b,g;
int l;
void game(){
	for(int i=0;i<l;i++){
		if(c[i]==b){
			for(int j=i+1;j<l;j++){
				if(c[j]==' ')continue;
				else if(c[j]==b){i=j-1;break;}
				else {
					cout<<i<<' '<<j<<endl;
					c[i]=' ';c[j]=' ';
					for(int k=i-1;k>=0;k--){
						if(c[k]==b){
							i=k-1;
							break;
						}
					}
					break;
				}
			}
		}
	}
	if(c[0]!=' ')game();
}
int main(){
	cin>>c;
	l=strlen(c);
	b=c[0];
	for(int i=0;i<l;i++){
		if(c[i]!=b){
			g=c[i];
			break;
		}
	}
	game();
	return 0;
}
