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
	int n,i,q[6];
	scanf("%d",&n);
	
	for(i=1;;i++){

		n-=100;
		if(n<0){
			q[0]=i-1;
			break;}}
	n=n+100;
	for(i=1;;i++){
		n=n-50;
		if(n<0){
			q[1]=i-1;
			break;}}
	n=n+50;
	for(i=1;;i++){
		n=n-20;
		if(n<0){
			q[2]=i-1;
			break;}}
	n=n+20;
	for(i=1;;i++){
		n=n-10;
		if(n<0){
			q[3]=i-1;
			break;}}
	n=n+10;
   for(i=1;;i++){
		n=n-5;
		if(n<0){
			q[4]=i-1;
			break;}}
	n=n+5;
	q[5]=n;
	for(i=0;i<6;i++)
	printf("%d\n",q[i]);
	return 0;
}