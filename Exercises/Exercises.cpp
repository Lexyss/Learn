#include "../../std_lib_facilities.h"

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	for (double x : temps) sum += x;

	sort(temps);
	cout << "Temperatures: ";
	for (int i = 0; i < temps.size(); i++)
		cout << temps[i] << " ";
	cout << "\nAverage temperature: " << sum / temps.size() << '\n';
	if (temps.size() % 2 == 0)
		cout << "Median temperature: " << (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2 << '\n';
	else
		cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
}