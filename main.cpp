#include"main.h"
#include "Pokemon.h"
int main() {
	Pokemon pikachu("pikachu");
	Pokemon pikachu2;
	pikachu2 = pikachu;

	pikachu.CallName();
	pikachu2.CallName();
	END();
	return 0;
}

