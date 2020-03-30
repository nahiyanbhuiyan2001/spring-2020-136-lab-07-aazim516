#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "doctest.h"
#include "shapes.h"



TEST_CASE("Testing removeLeadingSpaces")
{
    std::cout<<"Testing removeLeadingSpaces(std::string line)\n";
    CHECK(removeLeadingSpaces("       int x = 1;  ")=="int x = 1;  ");
}

TEST_CASE("Testing part_A")
{
    std::cout<<"Testing part_A(std::string file_name)\n";
    CHECK(part_A("badcode.txt")=="int main(){ \n// Hi, I'm a program!\nint x = 1; \nfor(int i = 0; i < 10; i++) {\ncout << i;\ncout << endl;\n}\n}\n");
}



TEST_CASE("Testing part_B")
{
    std::cout<<"Testing part_B(std::string file_name)\n";
    CHECK(part_B("badcode2.txt")=="int main(){\n // Hi, I'm a program!\n int x = 1;\n for(int i = 0; i < 10; i++) {\n  cout << i;\n  cout << endl;\n }\n}\n");
}
