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

/*
 * END4.cpp
 * ????
 *  Created on: 2013-1-11
 *      Author: Administrator
 *      ???????m???????
 */
char state[100][100];
int sum=0,m,n;
void spread(int x,int y){
	if(x==-1 || x==n || y==-1 || y==n)//??
	{return;
	}
	if(state[x][y]=='.' ) {state[x][y]='@';}
/*	else if(state[x][y]=='#')*/
}
int main(){

	int i,j,k;
	cin>>n;
	for(i=0;i<n;i++)//?
		for(j=0;j<n;j++)//?
			cin>>state[i][j];
	cin>>m;
	for(k=1;k<m;k++)//??
	{ for(i=0;i<n;i++)//?
			for(j=0;j<n;j++)//?
			if(state[i][j]=='@')
					{state[i][j]='*';}
    	for(i=0;i<n;i++)//?
    		for(j=0;j<n;j++)//?
    			if(state[i][j]=='*'){
					spread(i-1,j);spread(i+1,j);spread(i,j-1);spread(i,j+1);}//4???
	   for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					if(state[i][j]=='*')state[i][j]='@';}

	for(i=0;i<n;i++)//?
				for(j=0;j<n;j++)//?
					sum+=(state[i][j]=='@');
	cout<<sum<<endl;
	return 0;
}
