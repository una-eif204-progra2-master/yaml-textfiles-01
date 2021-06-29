//
// Created by Maikol Guzman on 6/28/21.
//

#ifndef YAML_FILE_TEST_PERSON_H
#define YAML_FILE_TEST_PERSON_H


#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int documentId;
public:
    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getDocumentId() const;

    void setDocumentId(int documentId);

    std::string testYaml(); // calculate the salary

public:
    Person(const std::string &firstName, const std::string &lastName, int documentId);

public:
    Person();
};


#endif //YAML_FILE_TEST_PERSON_H
