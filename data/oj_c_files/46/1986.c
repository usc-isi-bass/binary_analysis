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
    int i,j,r,c,rs,cs; 
	int Shuzu[row][col];
	scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		    scanf("%d",&Shuzu[i][j]);
		}
	}
	/*printf("%d\n",Shuzu[0][0]);*/
	for(i=rs=0,j=cs=0;;){
		if(Shuzu[i][j]==0) break;
	    printf("%d\n",Shuzu[i][j]);
		Shuzu[i][j]=0;
		if(i==rs&&j<c-1&&j>cs-1){j++;}
		else if(i==rs&&j==c-1){i++;r--;}
		else if(i<r&&i>rs&&j==c-1){i++;}
		else if(i==r&&j==c-1){j--;cs++;}
		else if(i==r&&j>cs-1&&j<c-1){j--;}
		else if(i==r&&j==cs-1){i--;rs++;}
		else if(i>rs&&i<r&&j==cs-1){i--;}
		else if(i==rs&&j==cs-1){j++;c--;}
	}
	return 0;
}