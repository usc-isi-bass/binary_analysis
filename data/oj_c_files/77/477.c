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

int data(char *c,int i,char boy,char girl){
	if(*(c+i)==0)return 0;
	if(*(c+i)==girl)return i;
	int j;
	j=data(c,i+1,boy,girl);
	cout<<i<<' '<<j<<endl;
	return data(c,j+1,boy,girl);
}
int main(){
	char children[1000],boy,girl;
	int i;
	cin>>children;
	boy=children[0];
	for(i=0;children[i]!=0;i++){
		if(children[i]!=boy){
			girl=children[i];
			break;
		}
	}
	i=data(children,0,boy,girl);
	return 0;
}