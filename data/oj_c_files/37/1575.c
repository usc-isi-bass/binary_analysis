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
	int number[26][2];
	int n;
	char s[100010];
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>s;
		memset(number,0,sizeof(number));
		for(int j = 0;j<strlen(s);j++){
			number[s[j]-'a'][0]++;
			if(number[s[j]-'a'][1]==0) number[s[j]-'a'][1]=j;
			}
		int min1=100010,out;
		for(int j = 0;j<26;j++){
			if(number[j][0]==1){
				if(min1>number[j][1]){
					min1 = number[j][1];
					out = j;
					}
				}
			}
		if(min1==100010) cout<<"no"<<endl;
		else cout<<(char)('a'+out)<<endl;
		}	
	return 0;
	}
