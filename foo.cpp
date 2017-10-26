//#include "boost/algorithm/string.hpp"
#include <boost/algorithm/string.hpp>

#include <iostream>

using namespace std;
using namespace boost;

int main() {
    string str("hello world");
    to_upper(str);
    std::cout << str << "\n";
}
