#include <iostream>
#include<algorithm>
using namespace std;
int main(){
  short t;
  cin>>t;
  while(t--){
    int k,n;
    cin>>n>>k;
    int *ar=new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int count=0;
    for(int i=k-1;i<n;i++){
      int sum=0;
      for(int j=count;j<=i;j++){
        sum=sum+ar[j];
      }
      ar[count]=sum;
      //cout<<ar[count]<<" ";
      count++;
    }

    int max=ar[0];
    for(int i=1;i<=count;i++){

        if(max<ar[i]){
            max=ar[i];
        }
    }
    cout<<max<<endl;
  }
  return 0;
}
