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
2010 12 22 ??
?????
????
????2???2????????? 
?1????i???????xi?????????? 
?1????i??????????yi??????????? 
??? 
2,5,4,6,7,3,1,6,2 
5,6,7,7,8,4,3,9,4 

???9????????????? 
[2,5),[5,6),[4,7),[6,7),[7,8),[3,4),[1,3),[6,9),[2,4)
?? 1000012760
*/


int main(){
	int T[1000]= {0}, x[1000]= {0}, y[1000]= {0}, i= 0, n= 0, k= 0, MostPeople= 0, People= 0;;
	char test;
	while(1){
		cin>>x[i];
		test= getchar();
		People++;
		i++;
		if(test== '\n')
			break;
	}
	i= 0;
	while(1){
		cin>>y[i];
		test= getchar();
		i++;
		if(test== '\n')
			break;
	}

	for(i= 0; i< People; i++){
		k= 0;
		while(k< (y[i]- x[i])){
			T[x[i]+ k]++;
			k++;
		}
	}

	for(i= 0; i< 1000; i++){
		if(T[i]> MostPeople)
				MostPeople= T[i];
	}

	cout<<People<<' '<<MostPeople<<endl;
	
	return 0;
}