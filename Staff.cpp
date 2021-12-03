//
// Created by Andre on 3.12.2021.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include "Staff.h"

Staff::Staff(const std::string& path) {
    std::string line; // сюда будем класть считанные строки
    std::ifstream file("employes.dat"); // файл из которого читаем (для линукс путь будет выглядеть по другому)

    while(getline(file, line)){ // пока не достигнут конец файла класть очередную строку в переменную (s)
        std::stringstream test(line);
        std::string segment;
        std::vector<std::string> seglist;

        while(std::getline(test, segment, ';'))
        {
            seglist.push_back(segment);
        }

        emploees.push_back(Emploee {seglist.at(0), seglist.at(1), std::stoi(seglist.at(2))});
    }

    file.close(); // обязательно закрываем файл что бы не повредить его
}

void Staff::Calculate(const std::string& duty) {
    for (const Emploee& emploee : emploees) {
        if(emploee.Duty == duty) {
            std::cout << emploee.Name << "'s sallary is " << emploee.Hours * 15.5 << "$" << std::endl;
        }
    }
}
