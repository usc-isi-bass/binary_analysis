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
	char a[101][101];  //???????
	int i,j,n,m,s=0;   //i?j??????s??????n??????m???
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}   //????
	cin>>m;
	while(m>0){        //?????0????????
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(a[i][j]=='*')a[i][j]='@';
			}
		}  //??????????????????????
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(a[i][j]=='@'){
					if(a[i-1][j]=='.' && i>1)a[i-1][j]='*';
					if(a[i+1][j]=='.' && i<n)a[i+1][j]='*';
					if(a[i][j-1]=='.' && j>1)a[i][j-1]='*';
					if(a[i][j+1]=='.' && j<n)a[i][j+1]='*';
				}//????????????????????????
			}
		}
		m--;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]=='@')s=s+1;
		}
	}//??s??????
	cout<<s;
	return 0;
}//?????
