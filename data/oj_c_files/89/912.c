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
 * 1.cpp
 *
 *  Created on: 2011-12-19
 *      Author: 1100012870
 */
int whoknow[1000000]={0},knowwho[1000000]={0};
int main()
{
	int i,n,x,y;
	cin>>n;
	cin>>x>>y;
	while(!(x==0 && y==0)){
		whoknow[y]++;
		knowwho[x]++;
		cin>>x>>y;
	}
	for(i=0;i<=n;i++)
		if(knowwho[i]==0 && whoknow[i]==n-1){
			cout<<i<<endl;
			return 0;
		}
	cout<<"NOT FOUND"<<endl;
	return 0;
}