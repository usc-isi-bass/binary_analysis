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
 * 111202_03_makeup.cpp
 *
 *  Created on: 2011-12-2
 *      Author: Alfalfa
 */
int main(){
	int n1,max=0,i;
	cin>>n1;
	const int n=n1;
	char word[n+1][41];
	int len[n+1];
	for(i=1;i<=n;i++)
		{
		scanf("%s", word[i]);
		len[i+1]=0;
		len[i]=strlen(word[i]); //??len????????
		}
	for(i=1;i<=n;i++){
		max=max+len[i];
		if(max<=80&&max+len[i+1]+1<=80&&i!=n) { cout<<word[i]<<" "; max++;} //??????????????????????80
		else if(max<=80&&max+len[i+1]+1>80&&i!=n) {
			cout<<word[i]<<endl; max=0;
		} //?????????
		else cout<<word[i]; //???????
	}

}
