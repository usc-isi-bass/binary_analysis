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
	int x,y,i,j;
	int X[11],Y[11];
	cin>>x>>y;
	for(i=1;x>=1;i++){
		X[i]=x;
	    x=x/2;}
	for(j=1;y>=1;j++){
		Y[j]=y;
	    y=y/2;}
	for(j=j-1,i=i-1;;j--,i--)
		if(X[i]!=Y[j]){
			cout<<X[i+1]<<endl;
			break;}
	return 0;
}
