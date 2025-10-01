// TV on 10/1/2025.
//

#include <iostream>
#include <json.hpp>
#include <unordered_map>
#include

using json = nlohmann::json;
using namespace std;

int main() {
    cout << "\n Hi this is JSON! \n" << endl;

    json myStuList = {
        {"Jimmy",1234},
        {"Jerry", 5678},
        {"Jelly"}

    };

    // Access the values like a hash map
    cout << "\n Jimmy: (this is the key/value pair's value)" << myStuList << endl;
    cout << "\n Jerry's student ID: " << myStuList["Jerry"] << endl;

    // Create a C++ hash map that uses three student names as a key and int values f
    // their test score

    

    myStudentTestScores["Jimmy"] = 100
    myStudentTestScores["Jerry"] = 200
    myStudentTestScores["Jelly"] = 300



    cout << "\n Jimmy's score is "
    cout << "\n Jerry's score is "
    cout << "\n Jelly's score is "



    for (auto &pair : myOrderedStudentTestScores) {
        cout << "\n Pair number " << myPairInt << pair.first << ":"
    }



    // create an ordered hash map using map
    map<string, int> myOrderedStudentTestScores;
    myOrderedStudentTestScores["Jimmy"] = 100;
    myOrderedStudentTestScores["Jerry"] = 200;
    myOrderedStudentTestScores["Jelly"] = 300;

    // output the ordered list



return 0;
}

