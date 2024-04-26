#pragma once
class doberman
{
public:
	void Doberman();
	void Doberman(int age, bool puce, int age_ancien_maitre);
	int getage();
	bool getpuce();
	void affichage();
	int getnombre_cambriolage_arrete();

private:
	int age;
	bool puce;
	int nombre_cambriolage_arrete;
};

