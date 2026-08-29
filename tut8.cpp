//ARRAY AND POINTERS

#include <iostream>
using namespace std;

int main(){
    int ROLL_NUMBERS[] = {1,2,3,4,5,6}; 
    ROLL_NUMBERS[6] = 7;
    ROLL_NUMBERS[7] = 8;
    string students[] = {"MOHIT","RAKESH","BANTY","UTSAV","BISWADEEP"};
    // cout<<"ROLL NUMBERS"<<endl;
    // cout<<ROLL_NUMBERS[0]<<endl;
    // cout<<ROLL_NUMBERS[1]<<endl;
    // cout<<ROLL_NUMBERS[2]<<endl;
    // cout<<ROLL_NUMBERS[3]<<endl;
    // cout<<ROLL_NUMBERS[4]<<endl;
    // cout<<ROLL_NUMBERS[5]<<endl;
    // cout<<ROLL_NUMBERS[6]<<endl;
    // cout<<ROLL_NUMBERS[7]<<endl;

    //#USING FOR LOOP PRINT AN ARRAY
    // for(int i=0; i<5; i++)  
    // {
    //     cout<<"THE STUDENTS "<<i<<" NAME IS : "<<students[i]<<endl;
    //}

    //#USING WHILE LOOP PRINT AN ARRAY
    // int i = 0;
    // while(i<=7){
    //     cout<<"THE ROLL NUMBERS "<<i<<" IS :"<<ROLL_NUMBERS[i]<<endl;
    //     i++;
    // }

    //#USING DO WHILE LOOP PRINT AN ARRAY
    // int i = 0;
    // do{
    //     cout<<"THE ROLL NUMBERS "<<i<<" IS :"<<ROLL_NUMBERS[i]<<endl;
    //     i++;
    // }while(i<=7);

    //POINTERS AND ARRAY
    int* b = ROLL_NUMBERS;
    cout<<*(b++)<<endl;
    cout<<*(b++)<<endl;
    cout<<*(b++)<<endl;
    cout<<*(b++)<<endl;
    return 0;
}