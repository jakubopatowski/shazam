#pragma once

#include <sstream>
#include <vector>

template<typename T>
std::string to_string(const T& t){
    std::stringstream ss;
    ss << t;
    return ss.str();
}

template<typename ... Param>
std::vector<std::string> to_string(const Param& param ...)
{
    
}
