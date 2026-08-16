#include <iostream>
using namespace std;

int main(){
    int age;
    //SELECTION CONTROL STRUCTURE : IF-ELSE LADDER
   cout<<"ENTER YOUR AGE : "<<endl;
    
    cin>>age;
//     if(18<age && age<60){
//         cout<<"YOU CAN DRIVE A CAR"<<endl;
//     } 
//     else if(age==18){
//         cout<<"now, you can apply for a driving license"<<endl;
//     }
//     else {
//         cout<<"YOU CANNOT DRIVE A CAR"<<endl;
//     }

//SELECTION CONTROL STRUCTURE : SWITCH CASE
switch (age)
{
case 18:
    cout<<"YOYU ARE 18 YEARS OLD"<<endl;
    break;
case 25:
    cout<<"YOU ARE 25 YEARS OLD"<<endl;
    break;
case 60:
    cout<<"YOU ARE 60 YEARS OLD"<<endl;
    break;
default:
    cout<<"YOU ARE NOT 18, 25 OR 60 YEARS OLD"<<endl;
    break;
}

    return 0;
}
