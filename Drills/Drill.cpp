#include "../../std_lib_facilities.h"

int main()
{
	vector<double> meters;
	double value = 0;
	string unit = "";
	double smallest = 0;
	double largest = 0;
	double total_meters = 0;
	bool control = 1;

	cout << "Introduzca valores seguidos de una unidad (cm, in, ft, m):\n";
	while (cin >> value >> unit) {
		if (unit == "in")
			meters.push_back(value * 0.0254); // convierte pulgadas a metros
		else if (unit == "ft")
			meters.push_back(value * 0.3048); // convierte pies a metros
		else if (unit == "cm")
			meters.push_back(value * 0.01); // convierte centimetros a metros
		else if (unit == "m")
			meters.push_back(value);
		else {
			cout << "La unidad " << unit << " no es valida, introduzca cm, in, ft, m\n";
			control = 0;
		}
		if (control == 1) { // Si la unidad que se introduzco fue valida
			if (smallest == 0) // Cambia el valor asignado por defecto, se usa en la primera iteración
				smallest = value;
			if (value < smallest)
				smallest = value;
			else if (value > largest)
				largest = value;
		}
		control = 1;
	}
	sort(meters);
	cout << "Los valores introducidos en metros fueron: ";
	for (double x : meters) {
		cout << x << " ";
		total_meters += x;
	}

	cout << "\nSe han introducido un total de " << meters.size() << " valores validos\n"
		<< smallest << " fue el mas pequeño\n"
		<< largest << " fue el mas grande\n"
		<< "La suma de todos los valores introducidos es: " << total_meters << " metros\n";
}