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

	int a[3][2], i, j, Person2, Person1, Person0;
//a?????????????????Personi????i???????
	
	for(a[0][0]= 0; a[0][0]<= 2; a[0][0]++){
		for(a[1][0]= 0; a[1][0]<= 2; a[1][0]++){
			for(a[2][0]= 0; a[2][0]<= 2; a[2][0]++){
//??????????0,1,2

				Person0= 0; 
				Person1= 0;
				Person2= 0;
				
				a[0][1]= (a[1][0]> a[0][0]) + (a[2][0]== a[0][0]);
				a[1][1]= (a[0][0]> a[1][0]) + (a[0][0]> a[2][0]);
				a[2][1]= (a[2][0]> a[1][0]) + (a[1][0]> a[0][0]);
//??????????


				if(!((a[0][1]== a[1][1]) || (a[0][1]== a[2][1]) || (a[1][1]== a[2][1]))){
					for(i= 0; i<= 2; i++){
						if(a[i][1]== 2)  Person2= a[i][0];
						if(a[i][1]== 1)  Person1= a[i][0];
						if(a[i][1]== 0)  Person0= a[i][0];
					}
				}
//?????????????????Person??????????

				if((Person0> Person1) && (Person1> Person2)){
					for(j= 0; j<= 2; j++){
						for(i= 0; i<= 2; i++){
							if(a[i][0]== j){
							cout<<(char)(i+ 65);
							}
//????�???????????�???????????
						}
					}
				}			
			}
		}
	}

	return 0;
	
}
