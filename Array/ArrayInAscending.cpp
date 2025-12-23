#include<stdio.h>
#include<conio.h>
int ascend(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<=n-2;i++){
		for(j=0;j<=n-2;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting the array:");
	for(i=0;i<=n-1;i++){
		printf("%d\t",a[i]);
	}
}
int main()
{
	int n,i,a[100];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0; i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	ascend(a,n);
	return 0;
}
