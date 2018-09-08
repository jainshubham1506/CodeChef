#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
<<<<<<< HEAD
    int cou=0;int x=0;
    const char *ch="chef";
    while(t--){
    string s;
    cin>>s;
    const char *c=s.c_str();
    while(*c++!='\0'){
        if(*c=='c'||*c=='h'||*c=='e'||*c=='f'){
            if(c==ch){
                if(*c=='c'){
                    ch++;
                }
                else{
                    x=1;
                    break;
                }
            }
            if(*c=='h'){
                ch=ch+2;
            }
            if(*c=='e'){
                ch=ch+2;
            }
        }
        ch=0;
    }  
    cou=x+cou;      
    }
=======
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
>>>>>>> 137716e51f1e4461601c70cff7bbcb11c4fc050e
    
    cout<<cou<<endl;
    return 0;
}