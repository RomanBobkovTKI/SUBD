#include <iostream>
#include <string>
#include <ctime>

#include "Header.h"

using namespace std;

int main() {
	int tempSize;
	cout << "Enter the size of the one-dimensional array: ";
	cin >> tempSize;
	workArray ar(tempSize);
	ar.filArray();
	ar.print_values();
	ar.algo_min();
	cout << "Minimum element: ";
	cout << ar.getMin() << endl;

	return 0;
}


	workArray::workArray(const int sizeArray) {
		if (size <= 0)
			throw new std::out_of_range("size");
		this->size = size;
		this->values = new int[size];
	}

	workArray::~workArray() {
		if (values != nullptr)
		{
			delete[] values;
			this->values = nullptr;
		}
	}


	int workArray::filArray() {
		srand(time(NULL));
		int num;
		for (int i = 0; i < this->size; i++)
		{
			num = rand();
			this->values[i] = num;
		}
		return 0;
	}

	int workArray::algo_min() {
		this->min = values[0];

		for (int i = 0; i < this->size; i++)
			if (values[i] < this->min) {
				this->min = values[i];
			}

		return this->min;
	}

	int workArray::getMin() {
		return this->min;
	}

	int workArray::print_values() {
		for (int i = 0; i < size; i++)
		{
			cout << values[i] << endl;
		}
		return 0;
	}

	
	



