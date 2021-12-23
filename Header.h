#pragma once

#include <initializer_list>
#include <iostream>
#include <string>


using namespace std;

/**
 *  \brief Класс стек для хранения целых чисел.
 */
class Stack
{
public:
	/**
	*  \brief Конструктор по умолчанию.
	*/
	Stack();

	/**
	*  \brief Создание объекта из последовательности.
	*/
	Stack(std::initializer_list<int> value);

	~Stack();

	/**
	*  \brief Добавляем элемент в стек.
	*  \param value Целое значение.
	*/
	void Push(const int value);

	/**
	*  \brief Добавляем элемент в стек.
	*  \param value Целое значение(элемент, который ищем)
	*  \return res_value Целое значение(номер позиции).
	*  \return result Булево значение.
	*/
	void Search(const int value);


	/**
	*  \brief Удаляем элемент в стек.
	*  \return value Целое значение.
	*/
	int Pop();

	/**
	*  \brief .
	*  \return .
	*/
	std::size_t GetSize() const;

	bool isEmpty() const;

private:
	/**
   *  \brief Элементы стека для хранения целых чисел.
   */
	class StackElement
	{
	public:
		/**
		*  \brief Конструктор по умолчанию.
		*/
		StackElement();

		/**
		*  \brief Конструктор с параметрами.
		*  \param value Целое значение.
		*/
		StackElement(int value);

		/**
		*  \brief Деструктор.
		*/
		~StackElement();

	private:
		int value;
		StackElement* next;
	};

	size_t size;

	StackElement* top;

	Stack = delete;

	Stack operator = delete;
};