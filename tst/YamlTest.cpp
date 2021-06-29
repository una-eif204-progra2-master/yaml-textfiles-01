//
// Created by Maikol Guzman on 6/28/21.
//

#include <Person.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, CheckYamlTxt){
    Person person;

    person.setFirstName("Mike");
    person.setLastName("Guzman");
    person.setDocumentId(123456);

    std::cout << "My name is: " << person.getFirstName() + " " +
                                   person.getLastName() << "\n";

    std::cout << "My name is: " << person.testYaml() << "\n";

    EXPECT_EQ(person.getFirstName() + " " + person.getLastName(),"Mike Guzman");
    EXPECT_EQ(person.testYaml(),"My name is: Mike Guzman (From Yaml)");
}