#include "../lib/yaml-cpp/include/yaml-cpp/node/node.h"

int main() {
    YAML::Node config = YAML::LoadFile("config.yaml");
    return 0;
}