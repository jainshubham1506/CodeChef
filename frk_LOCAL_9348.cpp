#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
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
    
    cout<<cou<<endl;
    return 0;
}