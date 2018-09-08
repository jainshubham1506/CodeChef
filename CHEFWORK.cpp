#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int translator=999,author=999,authTrans=999;
    int cost[t];
    int type[t];
    for(int i=0;i<t;i++){
        cin>>cost[i];
    }
    for(int j=0;j<t;j++){
        cin>>type[j];
    }
    for(int k=0;k<t;k++){
        switch(type[k]){
            case 1:
            if(cost[k]<translator){
                translator=cost[k];
            }
            break;
            case 2:
            if(cost[k]<author){
                author=cost[k];
            }
            break;
            case 3:
            if(cost[k]<authTrans){
                authTrans=cost[k];
            }
            default:break;
        }
    }
    int sum=author+translator;
    //cout<<author<<translator<<authTrans<<endl;
    if(sum<authTrans){
        cout<<sum<<endl;
    }
    else{
        cout<<authTrans<<endl;
    }
    
}