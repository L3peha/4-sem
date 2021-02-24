#pragma once
#ifndef HUMAN_H
#define HUMAN_H

#include<iostream>

using namespace std;

class Human
{
private:
	int id;
	bool alive;
public:
	Human();
	bool getAlive(int i) const;
};

#endif