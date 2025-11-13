#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

#include "base.h"
#include "commands.h"
#include "parser.h"

void startProccess(unsigned int number_of_command){
    switch (number_of_command)
    {
    case 1:
        
    case 2:
        
    case 3:
        
    default:
        throw std::invalid_argument("wrong argument");
    }
}

int main(){
    unsigned int number_of_command = 0;
    bool still_working = true;
    while (still_working)
    {
        number_of_command = getMenu("data/main_menu.txt");
        if(number_of_command == 4){ still_working = false;}
        else{
            startProccess(number_of_command);
        }
    };
    return 0;
}