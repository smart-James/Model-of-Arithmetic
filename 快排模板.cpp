#include<bits/stdc++.h>
using namespace std;
int get_index(int *arr,int left,int right);
void quick_sort(int *arr,int left,int right);
int main(){
	
	int N=6;
	int arr[100]={0};
//	cin>>N;
	for(int i=0;i<N;i++)scanf("%d",&arr[i]);
	quick_sort(arr,0,N-1);
	for(int i=0;i<N;i++)printf("%d ",arr[i]);
	return 0;
}
void swap(int &a,int &b){

	int t=a;
	a=b;
	b=t;
}
void quick_sort(int *arr,int left,int right){
	srand((unsigned)time(NULL));
	if(left>=right)return ;
	
	int k=arr[left];
	int i=left,j=right;
	while(i!=j){
	
	while(i<j&&arr[j]>=k)--j;
	swap(arr[i],arr[j]);
	while(i<j&&arr[i]<=k)++i;
	swap(arr[i],arr[j]);
	}//处理完后a[i]=k; 
	
	quick_sort(arr,left,i-1);
	quick_sort(arr,i+1,right);
}

//int get_index(int *arr,int left,int right){
//	int pivot=arr[left];
//	while(left<right){
//		while(arr[right]>=pivot&&left<right)right--;
//		arr[left]=arr[right];
//		while(arr[left]<=pivot&&left<right)left++;
//		arr[right]=arr[left];
//	}
//	arr[left]=pivot;
//	return left;
//}
//void quick_sort(int *arr,int left,int right){
//	if(left<right){
//	int index=get_index(arr,left,right);
//	quick_sort(arr,left,index-1);
//	quick_sort(arr,index+1,right);
//	}
//}





