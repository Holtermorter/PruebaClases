#include "includeTotal.cpp"


using namespace std;

int main() {
	string name;
	cout << "Indique un nombre de usuario: ";
	cin >> name;
	Entity p1(300, 100, name, 10);
	Entity orc(300, 100, "Jefe Orco", 5);

	orc.hit(p1.damage); p1.interact(5);

	cout << "Vida JEFE ORCO: " << orc.counter(0) << endl;
	cout << "Estamina " << p1.name << ": " << p1.counter(1) << endl;


}