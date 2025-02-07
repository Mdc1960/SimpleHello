#include <iostream>
#include "Player.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    std::cout << "Hello World!\n";

    Player p = Player();

    p.printId();
    p.setId(25);
    p.printId();


    return 0;
}