#include<iostream>
using namespace std;

int main(){
    
   double t;cin>>t;
    while(t--){
        float x1,x2,x3,v1,v2;
        cin>> x1 >>x2>>x3>>v1>>v2;
        float ans1=(x3-x1)/v1;
        float ans2=(x2-x3)/v2;
        cout<<"ans1= "<<ans1<<"ans2="<<ans2<<endl;
        if(ans1<ans2){
            cout<<"Kefa"<<endl;
        }
        else if(ans1>ans2){
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }

    }
}