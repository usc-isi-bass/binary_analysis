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

//??2?N??
//??????? 
//?????12.12.20
char s[200],st[200],sw[200]; //????????? 
int N;
void multi(int n)  //?????2??? 
{
	if (n==N) return;  //????????? 
	else{
		st[0]=0;  //??? 
		for(int i=0;i<strlen(sw);i++){
			st[i+1]=(s[i]*2+st[i])/10;
			s[i]=(s[i]*2+st[i])%10;
			sw[i]='x';}  //?????? 
		s[strlen(sw)]=st[strlen(sw)];
		sw[strlen(sw)]='x';
		multi(n+1);}  //???? 
}		
int main()
{
	int p;
	cin>>N;  //?? 
	s[0]=1;
	st[0]=0;
	sw[0]='x';  //????? 
	multi(0);  //???? 
	for(int i=strlen(sw);i>=0;i--){
		s[i]+='0';
		if (s[i]!='0'){
			p=i;
			break;}}  //????? 
	s[p]-='0';
	for(int i=p;i>=0;i--){
		s[i]+='0';
		cout<<s[i];}  //?? 
	return 0;
}
