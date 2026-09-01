//"Function AND FUNCTION PROTOTYPE"

#include <iostream>
using namespace std;

//FUNCTION PROTOTYPE
//WRITE FUNCTION PROTOTYPE BEFORE MAIN FUNCTION
//WRITE FUNCTION -name(arguments)
int add(int a, int b); //FUNCTION PROTOTYPE
void display(); //FUNCTION PROTOTYPE

int main (){
    int num1, num2;
    cout<<"ENTER FIRST NUMBER : ";
    cin>>num1;
    cout<<"ENTER SECOND NUMBER : ";
    cin>>num2;
    cout<<"SUM OF TWO NUMBERS IS : "<<add(num1, num2)<<endl;
    display();
    return 0;
}

int add(int a, int b){
    int c = a + b;
    return c;
}

void display(){
    cout<<"YOU ARE A GOOD PROGRAMMER"<<endl;
}