//
// Created by Andre on 3.12.2021.
//

#include <iostream>
#include "Staff.h"

Staff::Staff(const std::string& path) {
    emploees.push_back(Emploee {"Programmer", "Jonh", 42});
    emploees.push_back(Emploee {"Programmer", "Ыеуу", 43});
    emploees.push_back(Emploee {"Programmer", "ADsda", 39});
}

void Staff::Calculate(const std::string& duty) {
    for (const Emploee& emploee : emploees) {
        if(emploee.Duty == duty) {
            std::cout << emploee.Name << "'s sallary is " << emploee.Hours * 15.5 << "$" << std::endl;
        }
    }
}
