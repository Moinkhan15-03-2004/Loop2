#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum =0;
    for(int i=1;i<n;i++){
       int res = sum*i;
        sum++;
        cout<<res<<endl;
    }
    
}