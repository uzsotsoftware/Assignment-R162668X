/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: R162668X
 *
 * Created on October 9, 2017, 9:03 AM
 */

#include <cstdlib>
#include<iostream>
#include<fstream>

using namespace std;

/*
 * 
 */
class students {
    string regNum;
    string firstName;
    string surname;
    int age;

public:

    void SetregNum(string rN) {
        regNum = rN;
    }

    string GetregNum() {
        return regNum;
    }

    void SetfirstName(string fN) {
        firstName = fN;
    }

    string GetfirstName() {
        return firstName;

    }

    void Setsurname(string s) {
        surname = s;
    }

    string Getsurname() {
        return surname;
    }

    void Setage(int a) {
        age = a;
    }

    int Getage() {
        return age;
    }

};

int main(int argc, char** argv) {

    students student;
    string c;
    cout << "Enter Registration Number..";
    cin>>c;
    student.SetregNum(c);
    string a;
    cout << "Enter First Name..";
    cin >> a;
    student.SetfirstName(a);
    string v;
    cout << "Enter Surname..";
    cin >> v;
    student.Setsurname(v);
    int l;
    cout << "Enter Age..";
    cin >> l;
    student.Setage(l);
    ofstream studentsFile("Files\\students", ios::binary);
    studentsFile.write((char*) &student, sizeof (students));
    if (studentsFile)
        cout << "Record saved successfully" << endl;
    studentsFile.close();

    return 0;
}