/*Question No.1
Write a program to generate permutations.
*/
#include <stdio.h>
#include <conio.h>
void main(){
	int n,r,i;
	long f1=1,f2=1,p;

	printf("Enter the value of n and r:");
	scanf("%d %d",&n,&r);
	for(i=1;i<=n;i++){
		f1=f1*i;
		
	}
	for(i=1;i<=(n-r);i++){
		f2=f2*i;
		
	}
	p=f1/f2;
	printf("The Permutation P(%d,%d)=%d",n,r,p);
	getch();
}
