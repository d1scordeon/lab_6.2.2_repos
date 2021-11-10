#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <Windows.h> 

using namespace std;

//Рекурсивний спосіб

void input(int* a, const int n, int i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];
	if (i < n - 1)
		input(a, n, i + 1);
	else
		cout << endl;
}

void print(int* a, const int n, int i)
{
	cout << setw(4) << a[i];
	if (i < n - 1)
		print(a, n, i + 1);
	else
		cout << endl;
}

int Max(int* a, const int n, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < n - 1)
		return Max(a, n, i + 1, max);
	else
		return max;
}

int Min(int* a, const int n, int i, int min)
{
	if (a[i] < min)
		min = a[i];
	if (i < n - 1)
		return Min(a, n, i + 1, min);
	else
		return min;
}
void inverse(int* a, const int n, int i)
{
	int tmp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tmp;
	if (i < n / 2 - 1)
		inverse(a, n, i + 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << " " << "n = ";
	cin >> n;

	int* a = new int[n];


	input(a, n, 0);
	print(a, n, 0);

	cout << "Максимальне = " << Max(a, n, 1, a[0]) << endl;
	cout << "Мінімальне = " << Min(a, n, 1, a[0]) << endl;

	inverse(a, n, 0);
	print(a, n, 0);

	return 0;
}