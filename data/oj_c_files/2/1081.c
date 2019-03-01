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
	int m,sum[27]={0},max=0,author;
	cin>>m;
	char str[1000][4],name[1000][27];
	for(int i=0;i<m;i++)	cin>>str[i]>>name[i];
	for(int i=0;i<m;i++){
		for(int j=0;j<strlen(name[i]);j++)
			sum[name[i][j]-'A']++;
	}
	for(int i=0;i<26;i++){
		if(max<sum[i]){
			max=sum[i];
			author=i;
		}
	}
	cout<<(char)('A'+author)<<endl;
	cout<<max<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<strlen(name[i]);j++){
			if(name[i][j]-'A'==author) cout<<str[i]<<endl;
		}
	}
	return 0;
}