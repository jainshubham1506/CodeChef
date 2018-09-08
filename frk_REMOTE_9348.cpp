#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    int cou=0;
    while(t--){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if((s[i]=='c'&&s[i+1]=='h')||(s[i]=='h'&&s[i+1]=='e')||(s[i]=='h'&&s[i+1]=='e')){
            count=1;
        }
        
    }
    cou=cou+count;
}  
    
    cout<<cou<<endl;
    return 0;
}