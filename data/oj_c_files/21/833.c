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
 * sub.cpp
 *
 *  Created on: 2011-12-23
 *      Author: 11229
 */

/*
 * ?????.cpp
 *
 *  Created on: 2011-12-23
 *      Author: 11229
 */
void sort(double arr[100],int len);
int main()
{
	int n,i,imax=0,imin=0;
	cin>>n;
	double sum=0,array[301]={0},average=0,*p=NULL,distant[301]={0},*pdis=distant,
	MAXdis=0,MINdis=100000,maxnum[100]={0},minnum[100]={0},*pmax=maxnum,*pmin=minnum;
	p=array;
	for(i=0;i<n;i++){
		cin>>*(p+i);
		sum+=*(p+i);
	}
	average=sum/(double)(n);
	for(i=0;i<n;i++){
		*(pdis+i)=abs(*(p+i)-average);
		if(*(pdis+i)>MAXdis)MAXdis=*(pdis+i);
		//if(*(pdis+i)<MINdis)MINdis=*(pdis+i);
	}
	for(i=0;i<n;i++){
		if(*(pdis+i)==MAXdis){
			*(pmax+imax)=*(p+i);
			imax++;
		}
		//if(*(pdis+i)==MINdis){
			//*(pmin+imin)=*(p+i);
			//imin++;
		//}
	}
	sort(maxnum,imax);
	//sort(pmin,imin);
	return 0;
}
void sort(double arr[100],int len)
{
	double *pa=arr,temp=0;
	int i,j;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++){
			if(*(pa+j)>*(pa+j+1)){
				temp=*(pa+j);
				*(pa+j)=*(pa+j+1);
				*(pa+j+1)=temp;
			}
		}
	for(i=0;i<len-1;i++)cout<<*(pa+i)<<',';
	cout<<*(pa+len-1);
	cout<<endl;
}

