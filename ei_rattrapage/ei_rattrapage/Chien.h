#pragma once
class Chien
{
public:
	void chien();
	void chien(int age, bool puce);
	int getage();
	bool getpuce();
	void affichage();
	void setage();
	void setpuce();

private:
	int age;
	bool puce;

};

