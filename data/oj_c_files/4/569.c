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
	int row,col,i,j,s;
	cin>>row>>col;
	int array[100][100];
	for(i=0;i<row;i++)          //?????
		for(j=0;j<col;j++)
		cin>>array[i][j];
	for(i=0;i<col;i++)          //????????
		{s=i;
		 while(s>=0&&(i-s)<row)
		   {cout<<array[i-s][s]<<endl;
		   s--;}
		   }
         for(i=col;i<col+row-1;i++)  //????????
                   {s=col-1;
    		 while(s>=0&&(i-s)<row)
    		   {cout<<array[i-s][s]<<endl;
    		   s--;}
    		   }

	return 0;
}
