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

int main(){
	char temp[100];
	int i=0,k,left[100],right[100],space=0;
	cin.getline(temp,100);
	left[0]=0;
	for(k=0;k<=strlen(temp);k++)
	{
		if((temp[k]==' ')||(temp[k]=='\0')){
			space++;
			right[i]=k-1;
			i++;
			left[i]=k+1;
		}
	}
	for(i=space-1;i>=0;i--)
	{	if(i!=space-1) cout<<' ';
		for(k=left[i];k<=right[i];k++)
			cout<<temp[k];
	}
}