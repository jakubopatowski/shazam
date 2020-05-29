#pragma once

#include <sstream>
#include <vector>

template< typename T >
std::string to_string_impl( const T& t ) {
    std::stringstream ss;
    ss << t;
    return ss.str();
}

std::vector< std::string > to_string() { return {}; }

template< typename T1, typename... Param >
std::vector< std::string > to_string( const T1& p1, const Param&... param ) {
    std::vector< std::string > s;
    s.push_back( to_string_impl( p1 ) );

    const auto remainder = to_string( param... );
    s.insert( s.end(), remainder.begin(), remainder.end() );
    return s;
}
