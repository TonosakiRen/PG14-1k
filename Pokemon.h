#pragma once
#include<stdio.h>
class Pokemon
{
public:
	const char* name;
public:
	Pokemon();
	Pokemon(const char* name);
	~Pokemon();
	Pokemon(const Pokemon& obj);
	void CallName();

	Pokemon& operator = (const Pokemon& a);
	
};
