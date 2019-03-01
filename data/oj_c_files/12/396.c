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

/*?????
 *??? 2010-11-13
 *?????
 */
int main ()
{int i=0,j=0,t=0,m,n;
double a[1000][100];              //?????????
cin>>a[i][j];                 //??????
 while(a[i][j]!=-1){
	 while(a[i][j]!=0){
		 cin>>a[i][j+1];
		 j++;}j++;
		 for(m=0;m<j-1;m++){
			 for(n=m+1;n<j-1;n++){
				 if(a[i][m]/a[i][n]==2.0||a[i][m]/a[i][n]==0.5)t++;}}
	 i++;j=0;cin>>a[i][j];cout<<t<<endl;t=0; //??
 }
 return 0;
 }
