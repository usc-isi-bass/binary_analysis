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
 *  Name: ????.cpp
 *  Created on: 2010-11-20
 *  Author: ???
 *  Purpose???????
*/
int main(){            // ?????
	int a[101][101],b[101][101],c[101][101];  //??????
	int i1,j1,i2,j2,i3,j3,k;         //????
	int x1,x2,y1,y2;             //????
	cin>>x1>>y1;            //?????
	for(i1=0;i1<x1;i1++)      //for??????a??
		for(j1=0;j1<y1;j1++)
		{cin>>a[i1][j1];}
	cin>>x2>>y2;
	for(i2=0;i2<x2;i2++)             //???b??
			for(j2=0;j2<y2;j2++)
			{cin>>b[i2][j2];}
	for(i3=0;i3<x1;i3++) {         //????c
		for(j3=0;j3<y2;j3++)
			{c[i3][j3]=0;
	for(k=0;k<x2;k++)
	{c[i3][j3]=c[i3][j3]+a[i3][k]*b[k][j3];}}     //????c?
	for(j3=0;j3<y2-1;j3++)
	{cout<<c[i3][j3]<<" ";}   //??????????
		cout<<c[i3][y2-1]<<endl;}   //??????
	return 0;        //?????
}
