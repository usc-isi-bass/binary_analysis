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
int n , k , i , j;         //??????n????k?????i,j
    cin>>n;             //??????
    char c[81];          //???????
    cin.getline(c,81);    //?????
    for ( i = 1 ; i <= n ; i++){//????n????
    	k=1;                  //???k=1
    	char c[81];
    	cin.getline(c,81);
    	if( ( ( c[0] <= 'Z' )&&( c[0] >= 'A' ) ) || ( ( c[0] <= 'z' )&&( c[0] >= 'a' ) ) || ( c[0] == '_' ) ){
    		for(j=1 ; j < (int)strlen( c ) ; j++ ){
    			if( ( ( c[j] <= 'Z' )&&( c[j] >= 'A' ) ) || ( ( c[j] <= 'z' )&&( c[j] >= 'a' ) ) || ( c[j] == '_' ) || ( ( c[j] <= '9' )&&( c[j] >= '0' ) ) )
    				continue;          //??????????????????????
    			else {            //???k=0?????
    				k = 0;
    				break;
    			}
    		}
    	}
    	else              //???k=0
    		k = 0;
    	cout<<k;        //??k
    	if(i!=n)
    		cout<<endl;
    }
    return 0;         //????
	}
