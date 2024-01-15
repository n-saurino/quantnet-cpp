#include <iostream>
#include <boost/tuple/tuple.hpp>

using namespace std;

typedef boost::tuple<string, int, double> Person;

void PrintPerson(Person p){
	cout << "Person Info: " << p.get<0>();
	cout << ", " << p.get<1>();
	cout << ", " << p.get<2>() << endl;
}

int main(){

	Person john("John", 31, 42);
	Person hans("Hans", 28, 23);
	Person josh("Josh", 26, 50);

	PrintPerson(john);

	john.get<1>() = 40;

	PrintPerson(john);

	return 0;
}
