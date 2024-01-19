//
// Created by Livi on 1/19/24.
//

#ifndef CS2240_LECTURER_H
#define CS2240_LECTURER_H

#endif //CS2240_LECTURER_H

#include <string>
using std::string;

class Lecturer{
private:
    int class1, class2, class3, class4;
    string name, office;

public:
    //constructors

    Lecturer() {
        class1 = class2 = class3 = class4 = 1000;
        name = "Jane Doe";
        office = "Innovation E320";
    }

    Lecturer(string name, string office, int class1, int class2, int class3, int class4) {
        this->name = name;
        this->office = office;
        this->class1 = class1;
        this->class2 = class2;
        this->class3 = class3;
        this->class4 = class4;
    }

    //getters

    string getName() const{ //this method isn't going to alter the method
        return name;
    }

    //setters

    void setClass1(int c){
        this->class1 = c;
    }

};