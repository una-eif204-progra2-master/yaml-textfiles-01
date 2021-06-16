#include <iostream>
#include "yaml-cpp/yaml.h"

int main() {
    // Using Relative Path
    YAML::Node config = YAML::LoadFile("../../text_files/test.yaml");

    if (config["name"]) {
        std::cout << "My name is: " << config["name"].as<std::string>() << "\n";
    }
    return 0;
}