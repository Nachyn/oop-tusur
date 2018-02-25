#pragma once
#include "../CheckSymbol.h"

namespace Lab6
{
	enum Sex { Female, Male };

	class Person
	{
	private:
		int Age;
	public:
		char Name[20];
		char Surname[20];
		Sex Sex;
		virtual void SetAge(int age);
		virtual int GetAge();
		Person() { };
		virtual string GetDescription();
		bool operator==(const Person& right);
	};
}