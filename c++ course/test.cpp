#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=1;i<=(N+1)/2;i++){
        for(int j=1;j<=(2*(N+1-2*i));j++){
            cout<<" ";
        }
        for(int j = i;j>0;j--){
            cout<<j<<" ";
        }
       
        for(int j=1;j<(4*(i-1)-1);j++){
            cout<<" ";
        }
        if(i>1){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    }
        cout<<endl;
    }
    for(int i=N/2;i>0;i--){
         for(int j=1;j<=(2*(N+1-2*i));j++){
            cout<<" ";
        }
        for(int j = i;j>0;j--){
            cout<<j<<" ";
        }
        
        for(int j=1;j<(4*(i-1)-1);j++){
            cout<<" ";
        }
        if(i>1){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}