#include "Pokemon.h"
Pokemon::Pokemon() {

}
Pokemon::Pokemon(const char* name) {
	this->name = name;
	printf("%sが出現\n", this->name);
}
Pokemon::~Pokemon() {

}
Pokemon::Pokemon(const Pokemon& obj) {
	name = obj.name;
	printf("%sをコピー\n", name);

}
void Pokemon::CallName() {
	printf("%s\n", this->name);
}
Pokemon& Pokemon::operator = (const Pokemon& a) {
	name = a.name;
	printf("%sをコピー\n", name);
	return *this;
}
