#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=5){
        cout<<"raws "<<i<<endl;
        int j=1;
        while(j<=10){
            cout<<"seat:"<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}