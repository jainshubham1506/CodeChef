#include<iostream>
#include<string>
using namespace std;
int main(){
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int t;
    cin>>t;
    while(t--){
    int length;
    cin>>length;
    char arr[length];
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    int i=0;int j=1;
    while(j<length){
        char c=arr[i];
        arr[i]=arr[j];
        arr[j]=c;
        i=i+2;
        j=j+2;
    }
    for(int k=0;k<length;k++){
        int count=0;
        while(arr[k]!=alphabet[count]){
                ++count;
        }
        arr[k]=alphabet[25-count];
    }
    for(int l=0;l<length;l++){
        cout<<arr[l];
    }
    }
}