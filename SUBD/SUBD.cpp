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

Stack::StackElement::StackElement(const int value) :value(value), next(nullptr) {}

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
	return !(this->size > 0 and this->top != nullptr);
}

int Stack::Search(int value) 
{	
	if (this->isEmpty()) throw std::out_of_range("Нельзя искать в пустом Стеке");
	auto elem = this->top;
	int i = 1;
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

string Stack::ToString()
{
	auto elem = this->top;
	string value = "";
	while (elem)
	{
		value += std::to_string(elem->value);
		elem = elem->next;
		if (elem) value += ",";
	}
	return value;
}