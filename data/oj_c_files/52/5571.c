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
	int n,m;
	cin>>n>>m;
	int mat[n];
	for(int i=0;i<n;i++){
		cin>>*(mat+i);
	}

	for(int k=0;k<m;k++){
		int swap=*mat;
		*mat=*(mat+n-1);
		for(int i=n-2;i>0;i--){
			*(mat+i+1)=*(mat+i);
		}
		*(mat+1)=swap;
	}

	for(int i=0;i<n-1;i++){
		cout<<*(mat+i)<<" ";
	}
	cout<<*(mat+n-1);
}
