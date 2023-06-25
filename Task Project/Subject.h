#pragma once
#include <string>
#include "Observer.h"
#include<iostream>

//Creating Subject class
class Subject{
//variable

public:
    std::string state;
    Observer observers[3];
    int observerCount = 0;

//Methods
    //loops through observer array to check if observer o already exists

    public:
    void attach(Observer o){

        for (int i = 0; i<observerCount; i++){
            if (observers[i].name == o.name){

                std::cout << "Observer is already attached." << std::endl;

            return;
            }
        }

    //checking for space to add to array
    if (observerCount >= 3){
        std::cout << "No more room to add observers" << std::endl;

        return;
    }

    //Attaching observer to array
    observers[observerCount++] = o;

    }






};


