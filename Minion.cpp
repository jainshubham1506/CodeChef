#include<iostream>
#include<stdio.h>
using namespace std;
void getArray(int n,int k){
	int arr[]=new int[n]; 
	for(int i=0;i<n;i++){
		cin>>arr[i]>>endl;
	}
	for(int i=0;i<n;i++){
		arr[i]=arr[i]+k;

	}
	minions(n,k,arr);	
}
void minion(int n,int k,int arr[]){
	int index=0;
	for(int i=0;i<n;i++){
	if(arr[i]%7==0){
	index++;
	}
	}
	cout<<index<<endl;
   }
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++){
		int n,k;
		scanf("%d%d",&n,&k);
		getArray(n,k);
	}
return 0;		
}
