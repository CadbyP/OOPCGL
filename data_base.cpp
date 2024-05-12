#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Student
{
int roll_no, Date, month, year, Drive_no,Tel_No;
char name[50], class1[2];
char Add[50];
char div[5],Blood_grp[2];
public:
void Accept_Data()
{
cout<<"Enter Name of Student:";
cin>>name;
cout<<"Enter Roll No of Student:";
cin>>roll_no;
cout<<"Enter Class of Student:";
cin>>class1;
cout<<"Enter Division of Student:";
cin>>div;
cout<<"Enter Date of Birth of Student:";
cin>>Date>>month>>year;
cout<<"Enter Blood Group of Student:";
cin>>Blood_grp;
cout<<"Enter Address of Student:";
cin>>Add;
cout<<"Enter Telephone Number of Student:";
cin>>Tel_No;
cout<<"Enter Driving Liecence Number of Student:";
cin>>Drive_no;
}
void Display_Data()
{
cout<<"Name of Student is:"<<name<<endl;
cout<<"Roll No of Student is:"<<roll_no<<endl;
cout<<"Class of Student is:"<<class1<<" Year"<<endl;
cout<<"Division of Student is:"<<div<<endl;
cout<<"Date of Birth of Student is:"<<Date<<"/"<<month<<"/"<<year<<endl;
cout<<"Blood Group of Student is:"<<Blood_grp<<endl;
cout<<"Address of Student is:"<<Add<<endl;
cout<<"Telephone Number of Student is:"<<Tel_No<<endl;
cout<<"Driving Liecence Number of Student is:"<<Drive_no<<endl;
}
};
int main()
{
Student s1,s2;
cout<<"*******************Enter Student1 Data*******************"<<endl;
s1.Accept_Data();
cout<<"*******************Enter Student2 Data*******************"<<endl;
s2.Accept_Data();
cout<<"*******************Student Data1*******************"<<endl;
s1.Display_Data();
cout<<"*******************Student Data2*******************"<<endl;
s2.Display_Data();
return 0;
}
