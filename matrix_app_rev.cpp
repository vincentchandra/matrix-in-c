#include<stdio.h>
#include<windows.h>

void matrix_multiplication(){
	int n,m,x,y,mat[10][100][100]={0};
	do{
		printf("insert matrix 1's size (row column): ");
		scanf("%d %d",&n,&m);
		printf("insert matrix 2's size (row column): ");
		scanf("%d %d",&x,&y);
		
		if(m!=x){
			system("cls");
			printf("please insert a valid matrix size!\n");
			
		}
	}while(m!=x);
	printf("insert your matrix 1:\n");
	for(int j=0;j<n;j++){
		for(int k=0;k<m;k++){
			scanf("%d",&mat[0][j][k]);
		}
	}
	printf("insert your matrix 2:\n");
	for(int j=0;j<x;j++){
		for(int k=0;k<y;k++){
			scanf("%d",&mat[1][j][k]);
		}
	}
	printf("matrix 1  x  matrix 2:\n");
	for(int d=0;d<n;d++){
		for(int j=0;j<y;j++){
			for(int k=0;k<m;k++){
				mat[4][d][j]+=mat[0][d][k]*mat[1][k][j];
			}
		}
	}
	for(int j=0;j<n;j++){
			for(int k=0;k<y	;k++){
				printf("%d ",mat[4][j][k]);
				}
			printf("\n");
			}	
	}


void matrix_addition(){
	int jumlah=0,row,column,mat[51][100][100]={0};
	do{
		printf("insert the number of matrix you want to sum(max 49): ");
		scanf("%d",&jumlah);
	}while(jumlah>49);
	printf("insert the size of the matrix(row column): ");
	scanf("%d %d",&row,&column);
	
	
	for(int i=0;i<jumlah;i++){
		printf("insert your matrix %d:\n",i+1);
		for(int j=0;j<row;j++){
			for(int k=0;k<column;k++){
				scanf("%d",&mat[i][j][k]);
			}
		}
	}
	for(int j=0;j<row;j++){
		for(int k=0;k<column;k++){
			mat[50][j][k]={0};
		}
	}
	for(int i=0;i<jumlah;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<column;k++){
				mat[50][j][k]+=mat[i][j][k];
			}
		}
	}
	printf("Result:\n");
	for(int j=0;j<row;j++){
		for(int k=0;k<column;k++){
			printf("%d ",mat[50][j][k]);
		}
		printf("\n");
	}	
	
	
}

int main(){
	int input=0;
	do{
		printf("Welcome to matrix app!\n");
		printf("1. Matrix Addition\n");
		printf("2. Matrix Multiplication\n");
		printf("3. Exit\n");
		printf(">> ");
		scanf("%d",&input);
		system("cls");
		if(input==1){
			matrix_addition();
		}
		else if(input==2){
			matrix_multiplication();
		}
		else if(input==3){
			printf("Thanks for using this app!\n");
		}
		system("pause");
		system("cls");
	}while(input!=3);
	return 0;
}
