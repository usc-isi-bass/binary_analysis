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
 * intergratedexercise1.21.cpp
 *
 *  Created on: 2013-12-28
 *      Author: st
 */
int main()
{
	int hill[22][22];
	memset(hill,0,sizeof(hill));
	int m,n;
	cin>>m>>n;
	int i,j;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>hill[i][j];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			if(hill[i][j]>=hill[i][j-1]&&hill[i][j]>=hill[i][j+1]&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i+1][j])
				cout<<i-1<<' '<<j-1<<endl;

}
