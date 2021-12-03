//
// Created by Andre on 3.12.2021.
//

#ifndef SALLARYCALC_STAFF_H
#define SALLARYCALC_STAFF_H


#include <string>
#include <vector>
#include "Emploee.h"

class Staff {
private:
    std::vector<Emploee> emploees;
public:
    Staff(const std::string& path);
    void Calculate(const std::string& duty);
};


#endif //SALLARYCALC_STAFF_H
