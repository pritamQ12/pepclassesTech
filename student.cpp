#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("Student.txt",ios::app);
    char name[30];
    int rollno;
    float percentage;

    cout << "ENTER NAME: ";
    cin >> name;

    cout << "ENTER ROLL NO: ";
    cin >> rollno;
    cout <<"Enter Percentage";
    cin>> percentage;

    out << "Name   : " << name << endl;
    out << "RollNo  : " << rollno << endl;
    out << "Percentage  : " << percentage <<"%"<< endl;
    out.close();
    cout << "\ndata written successfully to Student.txt";
    return 0;
}