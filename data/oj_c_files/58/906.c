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
	int n,i,j;
	cin>>n;
	cin.get();
	char a[n][81];//??????
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++){
		cin.getline(a[i],81);
	}
	for(i=0;i<n;i++){//????????????
		j=0;
		if((a[i][j]=='_')||((a[i][j]>='a')&&(a[i][j]<='z'))||((a[i][j]>='A')&&(a[i][j]<='Z')));
		else {cout<<'0'<<endl;//??????????
		continue;
		}
		while(a[i][j]!=0){
			if(((a[i][j]=='_')||((a[i][j]>='a')&&(a[i][j]<='z'))||((a[i][j]>='A')&&(a[i][j]<='Z'))||((a[i][j]>='0')&&(a[i][j]<='9')))==0)
			{cout<<'0'<<endl;
			        break;
					}
			j++;
	}
		if(a[i][j]==0)//????????? ????? ??? �1�
		cout<<'1'<<endl;
}
	return 0;
}
