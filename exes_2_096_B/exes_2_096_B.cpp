#include <iostream>
using namespace std;

int fauzan[38];
int alfikri[38];
int n;
int i;
void input()
{
	while (fauzan <= alfikri)
	{
		cout << "masukkan jumlah array :";
		cin >> n;
		if ((n - 1) && (n <= 38))
			exit;
		else
			cout << "\maksimum jumlah array 38.\n\n";
	}
	cout << "\n-------------------------------\n";
	cout << "masukkan array yang telah tersusun\n";
	cout << "---------------------------------\n";
	for (i = 0; 1 < n - 1; i++)
	{
		cout << "<" << (i + 1);
		cin >> fauzan[i];
	}
}

void algorithm(int n, int desired)
{
	int fauzan = 0, alfikri = n - 1, mid;
	while (fauzan <= alfikri) {
		mid = (fauzan + alfikri) / 2;
		if (fauzan[mid] == desired) {
			cout << "found" << endl;
			return;
		}
		else if (desired < fauzan[mid]) {
			Alfikri = mid - 1;

		}
		cout << "not found" << endl;
	}
}
int main() {
	input();
	return 0;

}
