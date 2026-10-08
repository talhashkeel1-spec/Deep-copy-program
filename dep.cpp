#include <iostream>
#include<string>
using namespace std;

    class student{
        public:
            string name;
            string id;
            student(string name,string id){
                this->name=name;
                this->id=id;
            }


    };

int main()
{

    student s1("Talha
        ","f2025065");
    student s2(s1); // copy constructor and deep copy
    s2.name="Ali";
    student s3=s1; //THis all are the method of deep copy
    s3.name="Asad";
    cout<<s1.name<<" "<<s1.id<<endl;
    cout<<s2.name<<" "<<s2.id<<endl;
    cout<<s3.name<<" "<<s3.id<<endl;
    return 0;
}