#include<iostream>
#include<fstream>
using namespace std;
class file
{
char name[50];
int rno;
public:
void accept()
{
cout<<"enter the name:"<<name;
cin>>name;
cout<<"enter roll:";
cin>>rno;
}
void display()
{
cout<<"name"<<name;
cout<<"roll no"<<rno;
}
};
int main()
{ 
file o[10];
fstream f;
int i,n;
f.open("f4.txt",ios::out);
cout<<"how many records you want:";
cin>>n;
for(i=0;i<n;i++)
{
o[i].accept();
f.write((char*)&o[i],sizeof(o[i]));
}
f.close();
f.open("f4.text",ios::in);
for(i=0;i<n;i++)
{
f.read((char*)&o[i],sizeof(o[i]));
o[i].display();
return 0;
}
}