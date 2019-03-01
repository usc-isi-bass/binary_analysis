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
 * ???????????.cpp
 *
 *  Created on: 2011-10-24
 *      Author:???
 */

int main(){
    int a[100][100],row,col,i,j,s;//i?j?s?????????????
    cin>>row>>col;
    for(i=0;i<row;i++)
    	for(j=0;j<col;j++)
    		cin>>a[i][j];
    for(s=0;s<row+col-1;s++){//?????????????????s?????i????
    	for(i=0;i<row;i++){
    		if(s-i<col){//????if???????????????
    		    		if(s>=i)
    		    			cout<<a[i][s-i]<<endl;
    		    		else break;
    		    	}
    	}
    }
	return 0;
}