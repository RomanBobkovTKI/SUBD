#include <algorithm>
#include <stdexcept>
#include "Header.h"

Stack::Stack(): size(0), top(nullptr) {}

Stack::Stack(const std::initializer_list<int> values) : Stack()
{
	for (auto value : values) 
	{
		this->Push(value);
	}
}

Stack::~Stack()
{
	while (this->top)
	{
		Stack::Pop();
	}
}

Stack::StackElement::StackElement(const int value) :value(value) {}

Stack::StackElement::~StackElement()
{
	this->next = nullptr;
}

void Stack::Push(int value) 
{
	const auto elem = new StackElement(value);
	elem->next = this->top;
	this->top = elem;
	this->size++;
}

int Stack::Pop()
{
	if (!this->isEmpty()) {
		const auto elem = this->top;
		const auto value = elem->value;
		this->top = this->top->next;
		delete elem;
		this->size--;
		return value;
	}
	else
	{
		throw std::out_of_range("СТЕК пуст");
	}
}

std::size_t Stack::GetSize() const 
{
	return this->size;
}

bool Stack::isEmpty() const
{
	if (this->size > 0 and this->top)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int Stack::Search(int value) 
{	
	if (this->isEmpty()) throw std::out_of_range("Нельзя искать в пустом Стеке");
	auto elem = this->top;
	int i = 0;
	while (this->top)
	{
		if (elem->value == value) {
			return i;
		}
		if (!elem->next) throw std::out_of_range("Элемент не найден");
		elem = elem->next;
		i++;
	}
}
