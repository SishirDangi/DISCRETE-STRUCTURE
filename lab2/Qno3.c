/*Question no.3
Write a program to implement Boolean matrix operations join, product, and
Boolean product.
*/
#include<stdio.h>
void main(){
	int m,n,p,q,i,j,k,sum=0;
	int M1[5][5], M2[5][5], join[5][5], meet[5][5], multiply[5][5];
	printf("Enter the number of rows and columns of Matrix1: ");
	scanf("%d %d",&m,&n);
	printf("Enter elements of Matrix1: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&M1[i][j]);
		}
	}
	
	printf("Enter the number of rows and columns of Matrix2: ");
	scanf("%d %d",&p,&q);
	printf("Enter elements of Matrix2: \n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&M2[i][j]);
		}
	}	
	
	 printf("\nBoolean join:\n");
	 for(i=0;i<m;i++){
	 	for(j=0;j<q;j++){
	 		join[i][j]= M1[i][j] || M2[i][j];
	 	}
	 }
	
	 for(i=0;i<m;i++){
		for(j=0;j<q;j++){
	 		printf("%d\t",join[i][j]);
	 	}
	 	printf("\n");
	
	 }
	
	printf("\nBoolean meet:\n");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			meet[i][j]= M1[i][j] && M2[i][j];
		}
	}

	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d\t",meet[i][j]);
		}
		printf("\n");
	}	
	
	
	printf("\nBoolean product:\n");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			for(k=0;k<p;k++){
				sum = sum || M1[i][k] && M2[k][j];
			}
			multiply[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d\t",multiply[i][j]);
		}
		printf("\n");
	}

}
