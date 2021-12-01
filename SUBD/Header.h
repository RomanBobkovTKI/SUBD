#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

/*
Класс для хранения структуры "Словарь"
*/

class MyDictionary
{
public:
	/*
	Конструктор по умолчанию.
	*/
	MyDictionary();

	/*
	Деструктор по умолчанию
	*/
	~MyDictionary();

	/*
	Конструктор с параметрами (только какими, пока не понятно)
	*/
	MyDictionary();

	/*
	Создание данных
	*/
	void Create();

	/*
	Измененеи данных
	*/
	void UpdateData();

	/*
	Удаление данных
	*/
	void DeleteData();

	/*
	Чтение данных
	*/
	void ReadData();

	/*
	Поиск данных
	*/
	void SearchData();

private:

};



