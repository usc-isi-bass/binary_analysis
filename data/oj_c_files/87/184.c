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

// kaoshi.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	int sz[1000][6],i,j,k=0,s;
	for(i=0;i<1000;i++){
		for(j=0;j<6;j++){
			scanf("%d",&sz[i][j]);
		}
		if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0){
			break;
		}else{
			k++;
		}
	}
	for(i=0;i<k;i++){
	s=(sz[i][3]+12-sz[i][0])*3600+(sz[i][4]*60+sz[i][5]-sz[i][1]*60-sz[i][2]);
	printf("%d\n",s);
	}
	return 0;
}

