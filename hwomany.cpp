#include<iostream>
using namespace std;
int main(){
  long long num;
  cin>>num;
  int count=0;
    if(num==0){
        count=1;
       // break;
    }
    while(num>0){
        num=num/10;
        ++count;
    }
    if(count<=3){
    cout<<count<<endl;
    }
    else{
        cout<<"More than 3 digits"<<endl;
    }
    return 0;
}