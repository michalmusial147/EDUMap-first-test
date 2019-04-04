#include <iostream>
#include <string>

class Employee
{
    public:
		int Age;
		string Position;
		string Name;
		Employee()
		{
			this->Name = string("");
			this->Position = string("");
			this->Age = 0;
		}
		Employee(const char* name,const char* position, int age)
		{
			this->Name = string(name);
			this->Position = string(position);
			this->Age = age;
		}
		friend ostream& operator<<(std::ostream& stream, const Employee emp)
		{
			stream << emp.Name << ", " << emp.Position << ", age: " << emp.Age;
			return stream;

		}
		
};
