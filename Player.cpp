#include "Player.hpp"

#include <iostream>
#include <string>
#include <utility>

using std::cout;
using std::endl;
using std::move;

Player::Player()
{
	id = 0;
}

void Player::printId(){
	cout << "Player Id is : " << id << endl;
}

void Player::setId(int id)
{
	this->id = move(id);
}

int Player::getId() const
{
	return id;
}
