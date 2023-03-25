#include<iostream>
using namespace std;
int main(){

    int n=5;
    for(int line=0;line<n;line++){
        for(int j=0;j<n;j++){
            if(j==n/2){
                cout<<"*";
            }
            else if(line==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}