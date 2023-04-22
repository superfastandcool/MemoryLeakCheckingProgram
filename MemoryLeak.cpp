/*
There are known limitations to this program. Neither the author of this program nor the owner of
this program take any liability for any loss the use of this program may cause. The use of this program is
entirely at the risk of the user.
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;




int main() {
    
    int newNum = 0;
    int deleteNum = 0;

    string currentWord;
    while (!cin.eof()) {

        cin >> currentWord;

        if (currentWord == "new") {
            newNum++;
        }


        if (currentWord == "delete") {
            deleteNum++;
        }

    }


    if (deleteNum == newNum) {
        cout << "There might not be any memory leaks." << endl;
    }
    else {
        cout << "There might be a memory leak." << endl;
    }


    return EXIT_SUCCESS;
}