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
	int n,i,tn,j,k;
	cin>>n;
	int m[n];
	for(i=0;i<n;i++){                         //?????n???
		cin>>m[i];
	}

	cin>>tn;                                  //???????
	int I,N=n;                                //N??????tn?????????
	for(I=n-1;I>=1;--I){                      //???????tn
		if(m[I]==tn) N=N-1;
		else break;                           //??????tn,?????
		}

	k=N;                                      //k???????????????
	for(i=0;i<N;i++){
		if(m[i]==tn){
			k=k-1;
			for(j=i;j<k;j++) m[j]=m[j+1];     //???????????,k??
			i=i-1;
		}
	}


	for(i=0;i<k-1;i++){
		cout<<m[i]<<" ";                      //????tn????
		}
	cout<<m[k-1]<<endl;
	return 0;
}