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
	char str[1000][100]={0};
	int n,num[1000]={0},sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>*(str+i);
	for(int j=0;*(*(str+i)+j)!=0;j++)(*(num+i))++;
	}
	cout<<*str;sum=*(num);
	for(int i=1;i<n;i++){
		sum+=*(num+i)+1;
		if(sum>80){cout<<endl<<*(str+i);sum=*(num+i);}
		else if(sum==80){cout<<' '<<*(str+i)<<endl<<*(str+i+1);sum=*(num+i+1);i++;}
		else{cout<<' '<<*(str+i);}
	}
	return 0;
}
