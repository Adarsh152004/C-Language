#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,n,a[10][10],b[10][10];
printf("Enter the number of rows and columns: ");
scanf("%d %d",&m,&n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("Enter a value: ");
		scanf("%d ",&a[i][j]);
	}
}
printf("\n");
printf(" Before Transpose of a matrix is:\n");
 	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
printf("\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		b[j][i] = a[i][j];
	}
}
 	printf("Transpose of a matrix is:\n");
 	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d ",b[i][j]);
	}
	printf("\n");
}
 	return 0;
}
