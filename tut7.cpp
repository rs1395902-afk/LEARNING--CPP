#include<iostream>
using namespace std;

int main(){
    cout<<"TODAY WE LEARN BREAK AND CONTINUE"<<endl;

    for(int i=0; i<=10; i++){
        
        // if(i==5){
        //     break;
        // }
        if(i==5){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;

}