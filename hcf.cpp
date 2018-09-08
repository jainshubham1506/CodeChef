#include<iostream>
#include<vector>
using namespace std;
void hcf(int,int);
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        hcf(a,b);
    }
    return 0;
}
void hcf(int a,int b){
    vector<int> a1;
    vector<int>b1;
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            a1.push_back(i);
        }
      
    }
    for(int i=1;i<=b/2;i++){
        if(b%i==0){
            b1.push_back(i);
        }
    }
    if(a<b){
        a1.push_back(a);
    }
    if(a>b){
        b1.push_back(b);
    }
    if(a==b){
        a1.push_back(a);
        b1.push_back(b);
    }
    int x=1;
    for(int i=0;i<=a1.size();i++){
        for(int j=0;j<=b1.size();j++){
            if(a1[i]==b1[j]){
                x=x*a1[i];
            }
        }
    }
    cout<<x<<endl;
}