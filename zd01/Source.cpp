#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class message {
public:
	void size_array() {
		cout << "Enter the size of the one-dimensional array: ";
	}

	void res_algo() {
		cout<< "Minimum element: ";
	}
};

class workArray {
public:
	workArray(int sizeArray) {
		this->size = sizeArray;
	}

	~workArray() {
		delete[] values;
	}

	int createValues(int size) {
		this->values = new int[size];
		return 0;
	}

	int filArray(int temp) {
		srand(time(NULL));
		int num;
		for (int i = 0; i < temp; i++)
		{
			num = rand();
			values[i] = num;
		}
		return 0;
	}

	int algo_min() {
		min = values[0];

		for (int i = 0; i < size; i++)
			if (values[i] < min) {
				min = values[i];
			}

		return min;
	}

	void print_res() {
		cout << min << endl;
	}

	void print_values() {
		for (int i = 0; i < size; i++)
		{
			cout << values[i] << endl;
		}
	}

private:
	int size;
	int* values;
	int min;
};



int main() {
	int tempSize;
	message m;
	m.size_array();
	cin >> tempSize;
	workArray ar(tempSize);
	ar.createValues(tempSize);
	ar.filArray(tempSize);
	ar.print_values();
	ar.algo_min();
	m.res_algo();
	ar.print_res();

	return 0;
}