// git_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include"vec.h"
#include"manager.h"
using namespace std;


int func() {
    bool intiger;
    int it = 0;
    do  {
        try {
            cout << "\n\nenter intiger\n";
            string i;
            intiger = true;
            cin >> i;


            if (intiger == true) {
                it = stoi(i);
                
            }
            else {
                cout << i << "plese enter intigers\n";
            }
        }
        catch (...) {
            cout << "catch\n";
            intiger = false;
        }
    } while (intiger == false);

    return it + 1;
}

int main()
{

    manager *man = new manager;
    vec factories(man);
    bool end = false;
    do {
        char decide;
        std::cout << "\ndo you want to build a factory Y/N\n";
        cin >> decide;
        if (decide == 'Y') {
            cout << "\nwhat is the factory matanace cost\n";
            factories.add(func());

        }
        else {
            continue;
        }
        cout << "this is your energy bill " << man->cost<<endl;

        cout << "destroy all factories? Y/N\n";
        cin >> decide;
        if (decide == 'Y') {
            cout << "what is the factory matanace cost\n";
            factories.~vec();
            cout << "\nthis is your energy bill " << man->cost << endl;
            end = true;
        }
        else {
            continue;
        }


    } while (end != true);

        return 0;
    }
   
    
    

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


/*for (int x = 0; x < i.length(); x++) {
    if (isdigit(i[x])) {
        continue;
    }
    else {

        intiger = false;
        break;
    }
}*/