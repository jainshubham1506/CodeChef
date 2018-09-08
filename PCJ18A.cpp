#include<iostream>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++){
      cin>>ar[i];
    }
    int flag=0;
    for(int j=0;j<n;j++){
      if(ar[j]>=k){
        flag=1;
      }
    }
    if(flag==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }
}
