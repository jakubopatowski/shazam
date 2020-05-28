#include "tools.hpp"

#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main( int argc, char* argv[] ) {
    cout << "Hello new project!\n";
    std::ifstream i( "./tests/test.json" );
    json s;
    i >> s;

    return 0;
}
