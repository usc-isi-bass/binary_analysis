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

int main()
{
	int reverse(int num);
	int i,in[6],out[6];
	for(i=0;i<6;i++){
		cin>>in[i];
		out[i]=reverse(in[i]);
	}
	for(i=0;i<6;i++)
		cout<<out[i]<<endl;
	return 0;	
}

int reverse(int num)
{
	int input,output[100],result=0,i,n1,n2,p;
	//if(num<0){
	//	input=-num;
	//	p=0;}
	//else{
		input=num;
	//	p=1;}
	for(i=0;i<100;i++){                        
		if(input!=0){
			output[i]=input%10;
			input=input/10;
		}
		else break;
	}
	n1=i;
	for(i=0;i<n1;i++){
		if(output[i]!=0)
			break;}
	n2=i;
	for(i=n2;i<n1;i++)
		result=result+output[i]*pow(10.0,n1-1-i);
	//if(p=0)
	//	result=0-result;
	//else
	//	result=result;
	return result;
}
	
