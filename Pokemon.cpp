#include "Pokemon.h"
Pokemon::Pokemon() {

}
Pokemon::Pokemon(const char* name) {
	this->name = name;
	printf("%s���o��\n", this->name);
}
Pokemon::~Pokemon() {

}
Pokemon::Pokemon(const Pokemon& obj) {
	name = obj.name;
	printf("%s���R�s�[\n", name);

}
void Pokemon::CallName() {
	printf("%s\n", this->name);
}
Pokemon& Pokemon::operator = (const Pokemon& a) {
	name = a.name;
	printf("%s���R�s�[\n", name);
	return *this;
}
