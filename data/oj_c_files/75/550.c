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
  ????????
*/

int main(){
	int x[1000]={0},y[1000]={0},s[1001]={0},i=0,j=0;    //x,y?????????s??????
	char c;
	while(1)
	{cin>>x[i];i++;if((c=getchar())=='\n')break;}
	while(1)
	{cin>>y[j];j++;if((c=getchar())=='\n')break;}//??
	for(int m=0;m<i;m++){
		for(int n=x[m];n<y[m];n++){
			s[n]+=1;}              //??????
	}
	int max=0;
	for(int p=0;p<1000;p++){if(max<s[p])max=s[p];}
	cout<<i<<' '<<max;      //??
return 0;}
