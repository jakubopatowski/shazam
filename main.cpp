#include "tools.hpp"

#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main( int argc, char* argv[] ) {
    const auto vec = to_string( "hello", 1, 3.4, 23 );
    for( const auto& o : vec ) { std::cout << o << '\n'; }
    return 0;
}
