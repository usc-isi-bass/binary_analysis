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
 *  Created on: 2010-11-20
 *      Author: jsgl
 *      ??? ?????
 */


int main(){//?????
    int a[101][101],b[101][101],i,n,m,j[101][101],k,c,d,x;//????
    cin>>n;//????a???
    cin>>m;//????a???
    for(i=0;i<n;i++)
    	for(k=0;k<m;k++)
    		cin>>a[i][k];//????a
    cin>>c;//????b???
    cin>>d;//????b???
    for(i=0;i<c;i++)
       for(k=0;k<d;k++)
        cin>>b[i][k];//????b

    for(i=0;i<101;i++)
       for(k=0;k<101;k++)
    	   j[i][k]=0;//???j?????0
    for(i=0;i<n;i++)
        for(k=0;k<d;k++){
        	for(x=0;x<=c;x++)
        	j[i][k]=a[i][x]*b[x][k]+j[i][k];//????c???????
        }
    for(i=0;i<n;i++){
        for(k=0;k<d-1;k++)
        	cout<<j[i][k]<<" ";
        cout<<j[i][k]<<endl;}//????c
	return 0;//????
}