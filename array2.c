//Write a program to insert an element at beginning, last, and at given position in a single dimention array..
#include<stdio.h>

void main(){
	
	int n,i,p,choose,item=0;
	int arr[100];
	
	
	printf("Enter size of arraay : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Choose Option - \n");
	printf("1. Insert in Beginning\n");
	printf("2. Insert at given position\n");
	printf("3. Insert at last\n");
	
	scanf("%d",&choose);
	if(choose==1){
		printf("Enter an element to insert at beginning : ");
		scanf("%d",&item);
		
		n++;
		for(i=n; i>0; i--){
			arr[i]=arr[i-1];
		}
		arr[0]=item;
		printf("Array after insertion : \n");
		for(i=0; i<n; i++){
			printf("%d\n",arr[i]);
		}
	}
	
	
	else if(choose==2){
		printf("Enter the position to insert an element : ");
		scanf("%d",&p);
		printf("Enter an element to insert at Given position : ");
		scanf("%d",&item);
		n++;
		for(i=n; i>p; i--){
			arr[i-1]=arr[i-2];
		}
		arr[p-1]=item;
		printf("Array after insertion : \n");
		for(i=0; i<n; i++){
			printf("%d\n",arr[i]);
		}
		
	}
	
	
	else if(choose==3){
		printf("Enter an element to insert at last : ");
		scanf("%d",&item);
		arr[n++]=item;
		printf("Array after insertion : \n");
		for(i=0; i<n; i++){
			printf("%d\n",arr[i]);
		}
	}
}
	
