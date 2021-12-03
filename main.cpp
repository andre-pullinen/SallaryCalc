#include <iostream>
#include "Staff.h"

int main() {
    Staff staff = Staff("employes.dat");

    bool isKeepRunning = true;
    while(isKeepRunning){
        std::string command;
        std::cout << "Enter duty name to calculate sallary or enter 'exit' to stop this process\r\n";
        std::cin >> command;

        if(command == "exit") {
            isKeepRunning = false;
            continue;
        }

        staff.Calculate(command);
    }

    return 0;
}
