//Facade pattern
//Наверное для ручного предмета данный паттерн в смысле ООП не очень применим, так как стрелок сам все действия выполняет.
//Но для шутера с упором на реализм, который все еще хочет быть игрой, система будет работать более менее логично.
#include<iostream>

using namespace std;

class Projectile
{
public:
	void prj_out()
	{
		cout << "Shot fired" << endl;
	}
};

class Magazine
{
	int mag_capacity = 12;
public:
	int get_mag_capacity()
	{
		return mag_capacity;
	}

	int prf_decrement(int capacity)
	{

	}

};

class Bolt
{
	bool safety = 0;
public:
	bool get_safety()
	{
		return safety;
	}
	void set_safety(int safety)
	{
		//Без проверок для упрощения
		this->safety = safety;
	}
	void safety_off()
	{
		if (get_safety() == 0) set_safety(1);
		cout << "Safety off" << endl;
	}
	void bolt_delay()
	{

	}
};



void main()
{
	setlocale(LC_ALL, "");

}