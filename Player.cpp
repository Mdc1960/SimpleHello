#include "Player.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

Player::Player()
{
	id = 0;
}

void Player::printId(){
	cout << "Player Id is : " << id << endl;
}
