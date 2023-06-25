#include <iostream>
#include "Machine.h"
#include "Employee.h"


int main() {
    // Creating objects
    Machine machine1 ("Machine A", "IDLE");
    employee emp1 ("Owen", "Production Manager");
    employee emp2 ("Josh", "Software Engineer");
    employee emp3 ("Sarah", "Software Engineer");

    // Attaching observers to the subject
    machine1.attach(emp1);
    machine1.attach(emp2);
    machine1.attach(emp3);


    //Changing setState to Producing. This should notify the Observers (employees) as update() is run after setstate
    machine1.setState("PRODUCING");

    return 0;

}
