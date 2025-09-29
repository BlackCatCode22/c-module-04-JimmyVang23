// Animals
// TV 9/29/2025

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    fstream myFile1;
    myFile1.open("Jimmy.txt",ios::out); // (out) writes a file, (in) reads a file
    if (myFile1.is_open()) {
        myFile1 << "HI\n";
        myFile1 << "This is a new line\n";
        myFile1.close();
    }

    myFile1.open("Jimmy.txt",ios::app); // append
    if (myFile1.is_open()) {
        myFile1 << "Hello 2\n";
        myFile1.close();
    }

    myFile1.open("Jimmy.txt",ios::in);
    if (myFile1.is_open()) {
        string myLine1;
        while (getline(myFile1,myLine1))
        cout << myLine1 << endl;
        myFile1.close();
    }

    // Test to see if the file was actually created
    if (myFile1) {
        cout << "\nFile Jimmy.txt successfully created in cmake-build-debug\n";
    }

//

    fstream myFile2;
    myFile2.open("D:/CIT-66 Jimmy/Daily CPP/9-29 Animals/Animals/arrivingAnimals.txt", ios::in);
    if (myFile2.is_open()) {
        string myLine2;
        while (getline(myFile2, myLine2))
        cout << myLine2 << endl;
        myFile2.close();
    }

    return 0;
   // system ("pause>0");
}