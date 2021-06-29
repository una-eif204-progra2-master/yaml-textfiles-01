//
// Created by Maikol Guzman on 6/28/21.
//

#include "Person.h"
#include "yaml-cpp/yaml.h"

Person::Person() {}

Person::Person(const std::string &firstName, const std::string &lastName, int documentId) : firstName(firstName),
                                                                                            lastName(lastName),
                                                                                            documentId(documentId) {}

const std::string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const std::string &firstName) {
    Person::firstName = firstName;
}

const std::string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const std::string &lastName) {
    Person::lastName = lastName;
}

int Person::getDocumentId() const {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    Person::documentId = documentId;
}

std::string Person::testYaml() {
    // Using Relative Path
    std::string txtReturn;
    YAML::Node config = YAML::LoadFile("../../text_files/test.yaml");

    if (config["name"]) {
        txtReturn = "My name is: " + config["name"].as<std::string>();
    }
    return txtReturn;
}
