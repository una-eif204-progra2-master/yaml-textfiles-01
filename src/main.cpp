#include <iostream>
#include "Person.h"

int main() {

    Person person;

    person.setFirstName("Mike");
    person.setLastName("Guzman");
    person.setDocumentId(123456);

    std::cout << "My name is: " << person.getFirstName() + " " +
                                   person.getLastName() << "\n";

    std::cout << "My name is: " << person.testYaml() << "\n";

    return 0;
}