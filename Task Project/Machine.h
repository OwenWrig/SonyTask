#pragma once
#include <string>
#include "Subject.h"

//Creating machine class
class Machine : public Subject{

    //Variables
    std::string name;


    //Methods
    public: 
        Machine(std::string name, std::string state){
        this->name = name;
        this->state = state;
        }

    public:

        //notifying Observers with a for loop
        void notifyAllObservers(){

        for (Observer o : observers){
            o.update(state,name);

        }

        //display message that observers have been notified.
        std::cout << "Observers Notified" << std::endl;
        }

        void setState(std::string s){
        this->state = s;
        notifyAllObservers();
        }


};
