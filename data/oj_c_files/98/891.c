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
	char word[41];
	int sum=0,n,t;
	cin>>n;
	t=n;
	n--;
	scanf("%s",word);
	cout <<word;
	sum=sum+strlen(word);
	while(n--)
	{
		scanf("%s",word);
		if((sum+strlen(word)+1 <= 80)&&(n!=t)){
			cout<<' ';
			sum++;
		}
		else {
			cout<<'\n';
			sum=0;
		}
		sum=sum+strlen(word);
		cout<<word;
		memset(word,0,sizeof(word));
	}
	
    return 0;
}