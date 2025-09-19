#pragma once
#include <string>
using namespace std;
class Product
{
	string name;
	string category;
	double price;
	double weight;
public:
	Product();
	Product(string n, string cat, double pr, double we);
	void Print();
	void Init(string n, string cat, double pr, double we);
	void Input(); // ввод с клавиатуры
	
	
	// методы аксессоры
	
	void SetName(string n);
	string GetName();

	void SetCategory(string cat);
	string GetName();

	void SetPrice(string pr);
	string GetName();

	void SetWeight(string we);
	string GetName();


};

