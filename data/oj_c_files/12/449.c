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
?????2010?11?19
???????
??????????
????00948344 ??
*/
int main(){
	int k=1;
	while(k==1){
		int a[16];
		cin>>a[0];
		int l=0;
		if(a[0]==-1)         //??????-1???????????
		 k=0;
		else{
			while(a[l]!=0)   //???????0?????????
			{ 
				l++;
				cin>>a[l];
			}
			int i,j,num=0;   //num??????
			for(i=0;i<l-1;i++)
				for(j=i+1;j<l;j++)
					if(a[i]-2*a[j]==0||a[j]-2*a[i]==0)
						num++;
			cout<<num<<endl;
		}
	}
	return 0;
}
