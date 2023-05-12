#include <iostream>
using namespace std;

int main()
{
	int n, i, hilal[29], num, muhamad, fakhri, mid; //muhamad lowerbound, fakhri upperbound
	cout << "Masukkan Panjang Elemment Array :";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "Masukkan Data " << (i + 1) << ":";
		cin >> hilal[i];
	}
	cout << "Masukkan data yg akan dicari : ";
	cin >> num;
	fakhri = 0;
	muhamad = n - 1;
	mid = (muhamad + fakhri) / 2;
	while (fakhri <= muhamad)
	{
		if (hilal[mid] < num)
		{
			fakhri = mid - 1;

		}
		else if (hilal[mid] == num)
		{
			cout << num << " found " << mid + 1 << "\n";
			break;
		}
		else {
			muhamad = mid + 1;
		}
		mid = (muhamad + fakhri) / 2;
	}
	if (fakhri > muhamad)
	{
		cout << num << " Not Found ";
	}

	return;
}
