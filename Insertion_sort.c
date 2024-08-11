/*Insertion Sort*/
#include<stdio.h>
main(){
	int n,a[20],i,j,key,k;
	printf("\n enter how many elements you want to enter");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n the elements of array are:");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}
	for(k=1;k<n;k++){
		key=a[k];
		j=k-1;
		while(key<a[j]&&j>=0){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	printf("\n the values after sort:");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
}
}
