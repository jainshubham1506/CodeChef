#include<iostream>
using namespace std;
class A{
private:
    long n,x,s;
    int* arr;
public:
    A(int n,int x,int s){
        this->n=n;
        this->x=x;
        this->s=s;
        arr=new int[n];
        for(int i=0;i<n;i++){
            if(i==x-1){
                arr[i]=1;
            }
            else{
                arr[i]=0;
            }
        }
    }
    void getSwapsArray(){
        while(s--){
            int c,d;
            cin>>c>>d;
            c=c-1;
            d=d-1;
            int l;
             l=arr[c];
            arr[c]=arr[d];
            arr[d]=l;
        }
    }
    void getSymbol(){
        for(int j=0;j<n;j++){
            if(arr[j]==1){
            int k=j+1;
            cout<<k<<endl;
            }
        }
    }
    ~A(){
        delete[] arr;
       // arr=nullptr;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,s;
        cin>>n>>x>>s;
        A* a=new A(n,x,s);
        a->getSwapsArray();
        a->getSymbol();
    }
}