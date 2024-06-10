#ifndef MOVEMENTCOMPONENT_H
#define MOVEMENTCOMPONENT_H

#include<vector>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<sstream>
#include<stack>
#include<map>
#include<string>

#include "SFML\System.hpp"
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "SFML\Audio.hpp"
#include "SFML\Network.hpp"

class MovementComponent
{
private:
	sf::Sprite& sprite;

	float maxVelocity;

	sf::Vector2f velocity;
	sf::Vector2f acceleteration;
	sf::Vector2f deceleration;

	//Initializer functions

public:
	MovementComponent(sf::Sprite& sprite, float maxVelocity);
	virtual ~MovementComponent();

	//Accessors
	const sf::Vector2f& getVelocity() const;

	//Functions
	void move(const float x, const float y, const float& dt);
	void update(const float& dt);
};

#endif