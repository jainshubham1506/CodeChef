#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n;
        int count=0;
        while(x>0){
                x=x%10;
                count++;
        }
        printf("%d",count);
    }
    return 0;
}
