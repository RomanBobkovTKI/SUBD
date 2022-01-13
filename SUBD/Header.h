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
	*  \brief Поиск элемента в стеке
	*  \param value Целое значение(элемент, который ищем)
	*  \return res_value Целое значение(номер позиции).
	*/
	int Search(const int value);


	/**
	*  \brief Удаляем элемент из стека.
	*  \return value Целое значение.
	*/
	int Pop();

	/**
	*  \brief получить размер Стека
	*  \return value Целое значение
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

		/**
		*  \brief Значение для хранения.
		*/
		int value;

		/**
		*  \brief Элемент следующий за текущим
		*/
		StackElement* next;
	};

	size_t size;

	StackElement* top;

	Stack(const Stack& rhs);
	Stack operator= (const Stack& rhs);
};