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
 * ???test.cpp
 * ??????
 * ????: 2010-11-20
 * ??????
 */
int main(){
	int x1,y1,x2,y2;  //???????????
	cin>>x1>>y1;
	int c1[x1][y1];  //????????????
	for(int x=0;x<x1;x++)  //??????
		for(int y=0;y<y1;y++)
			cin>>c1[x][y];
	cin>>x2>>y2;  //??????????????
	int c2[x2][y2];
	for(int x=0;x<x2;x++)
		for(int y=0;y<y2;y++)
			cin>>c2[x][y];
	int c[x1][y2];  //????????
	for(int i=0;i<x1;i++)memset(c[i],0,sizeof(c[i]));  
             //??????????0
	for(int x=0;x<x1;x++)  //????
		for(int y=0;y<y2;y++)
			for(int i=0;i<y1;i++)  
          //??????????????????????
				c[x][y]+=c1[x][i]*c2[i][y];  
	for(int x=0;x<x1;x++){    //????
		for(int y=0;y<y2-1;y++)
			cout<<c[x][y]<<" ";
		cout<<c[x][y2-1]<<endl;  //?????????
	}
return 0;
}
