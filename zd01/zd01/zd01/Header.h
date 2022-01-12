#include <ostream>
using namespace std;


#ifndef work_array_H
#define work_array_H

class workArray {
public:
	workArray(const int sizeArray);
	~workArray();
	int filArray();
	int algo_min();
	int getMin();
	int print_values();
	friend ostream& operator<<(std::ostream& os, const workArray& array)
	{
		for (std::size_t i = 0; i < size; i++)
		{
			os << values[i] << " ";
		}
		return os;
	}


private:
	int size;
	int* values;
	int min;
};
#endif // !1


