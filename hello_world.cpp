#include<iostream>

class World
{
private: void HelloWorld();
public: World()
{
	this->HelloWorld();
}
};

void World::HelloWorld()
{
std::cout<<"Hello World";
}

int main()
{
	World w;
return 0;
}
