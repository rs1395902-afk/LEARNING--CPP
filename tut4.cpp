// THERE ARE TWO TYPES OF HEADER FILES
// 1. System header files: It comes with the compiler
// 2. User defined header files: It is written by the programmer

#include<iostream>
using namespace std;

int main(){
    
    cout<<"OPERATORS IN C++"<<endl;
    cout<<"FOLLOWING ARE THE TYPES OF OPERATOR IN C++"<<endl;

    int a=10, b=5;
    // 1. Arithmetic Operators
    cout<<"THE VALUE OF a + b IS :"<<a+b<<endl;
    cout<<"THE VALUE OF a - b IS :"<<a-b<<endl;
    cout<<"THE VALUE OF a * b IS :"<<a*b<<endl;
    cout<<"THE VALUE OF a / b IS :"<<a/b<<endl;
    cout<<"THE VALUE OF a % b IS :"<<a%b<<endl;
    cout<<"THE VALUE OF a++ IS :"<<a++<<endl;
    cout<<"THE VALUE OF a-- IS :"<<a--<<endl;
    cout<<"THE VALUE OF ++a IS :"<<++a<<endl;
    cout<<"THE VALUE OF --a IS :"<<--a<<endl;

    // 2. Assignment Operators --> USED TO ASSIGN VALUES TO VARIABLES
    //INT a = 3, b = 9;

    //Comparison Operators --> USED TO COMPARE TWO VALUES
    cout<<"THE VALUE OF a == b IS :"<<(a==b)<<endl;
    cout<<"THE VALUE OF a != b IS :"<<(a!=b)<<endl;
    cout<<"THE VALUE OF a > b IS :"<<(a>b)<<endl;
    cout<<"THE VALUE OF a < b IS :"<<(a<b)<<endl;
    cout<<"THE VALUE OF a >= b IS :"<<(a>=b)<<endl;
    cout<<"THE VALUE OF a <= b IS :"<<(a<=b)<<endl; 

    //LOGICAL OPERATORS --> USED TO COMBINE CONDITIONAL STATEMENTS
    cout<<"THE VALUE OF LOGICAL AND OPERATOR ((a==b) && (a<b)) IS :"<<((a==b) && (a<b))<<endl; // AND OPERATOR
    cout<<"THE VALUE OF LOGICAL OR OPERATOR ((a==b) || (a<b)) IS :"<<((a==b) || (a<b))<<endl; // OR OPERATOR
    cout<<"THE VALUE OF LOGICAL NOT OPERATOR (!(a==b)) IS :"<<(!(a==b))<<endl;  // NOT OPERATOR
    return 0;
}