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
 * 1000012746_30_3.cpp
 *
 *  Created on: 2010-11-6
 *      Author: dyj
 *      Description:???????????????????<=100??
 *                  ???????????????????????????????????
 *                  ????????????????????????????????
 *
 */

int main(){
	char a[101],b[101],c[101],d[10001];
	cin.getline(a,101);
	cin>>b;
	cin>>c;
	int la=strlen(a);
	int lb=strlen(b);
	int lc=strlen(c);
	int i,j=0,k,num;
	for(i=0;i<la;i++){//???????????????lb???????
		for(k=0,num=0;k<lb;k++){
			if(a[i]==b[k])
				num++;
			i++;
		}//?num?????????
	   if(((num==lb)&&(a[i-k-1]==' '))||((num==lb)&&(i==k))){//??????????????
		   i=i-1;
		   for(k=0;k<lc;k++){
			   d[j]=c[k];
			   j++;
		   }//????c??
	   }
	   else {
		   i=i-k;
		   d[j]=a[i];
		   j++;
	   }//??????a

	}
	cout<<d<<endl;//???????d
	return 0;//????
}
