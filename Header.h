#pragma once

#include <iostream>
#include <string>


using namespace std;

/**
 *   Класс стек для хранения целых чисел.
 */
class Stack
{
public:
	/**
	*  Конструктор по умолчанию.
	*  По умолчанию размер стека равен 10
	*/
	Stack(int =10);


	/**
	*  Деструктор по умолчанию.
	*/
	~Stack();

	/**
	*   Добавляем элемент в вершину стека.
	*   Целое значение.
	*/
	void Push(const int value);

	/**
	*  Удалить элемент из вершины стека и вернуть его
	*/
	int Pop();

	
	/**
	*  n - й элемент от вершины стека
	*/
	int Peek(const int value);

	/**
	*  Получить размер стека
	*/
	int getStackSize();

	/**
	*  Получить номер текущего элемента в стеке
	*/
	int getTop();



private:
	/**
	*  Номер текущего элемента стека
	*/
	int top;
	
	/**
	*  Указатель на стек
	*/
	Stack* stackPtr;

	/**
	*  Максимальное количество элементов в стеке
	*/
	const int size;
};



