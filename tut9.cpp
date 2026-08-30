//"STRUCTURE , UNIONS AND ENUM"

#include <iostream>
using namespace std;

struct STUDENTS
{
    /* data */
    string name;
    int roll;
    int age;
    float marks;
    char section;

};

union DATA
{
    int age;
    char grade;
    float weight;
};


int main(){
    //STRUCTURE==> SEPARATE GLASSES FOR EACH MATERIAL 
    STUDENTS s1, s2, s3, s4;
    s1.name = "MOHIT";
    s1.roll = 1;
    s1.section = 'A';
    s1.age = 19;
    s1.marks = 456.25;

    s2.roll = 2;
    s2.section ='A';
    s2.age = 18;
    s2.name = "RAJA";
    s2.marks = 250.65;

    s3.name = "BANTY";
    s3.roll = 3;
    s3.section = 'B';
    s3.age = 22;
    s3.marks = 365.20;

    s4.name = "UTSAV";
    s4.roll = 4;
    s4.section ='D';
    s4.age = 20;
    s4.marks = 652;

    cout<<s1.name<<endl;
    cout <<s2.name<<endl;
    cout<<s2.marks<<endl;

    // ||========> UNION -- UNION = 1 glass (milk,juice,coffe )
    DATA d;
    d.age = 20;
    d.grade = 'A';
    //cout<<d.age<<endl;
    cout<<d.grade<<endl;

    //||====>"ENUMERATION"
    enum DAY{
        MONDAY = 1,
        TUESDAY = 2,
        WEDNESDAY = 3,
        THURSDAY = 4,
        FRIDAY = 5,
        SATURDAY = 6,
        SUNDAY = 7,
    };
    DAY TODAY = WEDNESDAY;
    DAY t1 = MONDAY;
    cout<<(t1==2)<<endl;
    cout<<TODAY<<endl;
    

    return 0;
}