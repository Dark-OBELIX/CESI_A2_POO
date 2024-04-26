#pragma once
class dalmatien
{
	public:
		void Dalmatien();
		void Dalmatien(int age, bool puce, int age_ancien_maitre);
		int getage();
		bool getpuce();
		void affichage();
		int getage_ancien_maitre();

	private:
		int age;
		bool puce;
		int age_ancien_maitre;
};

