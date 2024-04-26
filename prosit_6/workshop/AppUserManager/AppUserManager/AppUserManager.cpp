#include <iostream>
#include <list>

#include "..\AppUserManager.Core\User.h"
#include "..\AppUserManager.Core\ServiceUser.h"

using namespace std;
using namespace AppUserManager_Core_Data_DAO;
using namespace AppUserManager_Core_Services;

void ShowMenu() {
	cout << "\nQue voulez-vous faire ?\n";
	cout << "0 - sortir...\n";
	cout << "1 - liste des user\n";
	cout << "2 - chercher un user\n";
	cout << "3 - ajouter un user\n";
	cout << "4 - supprimer un user\n";
}

int main()
{
	int action = -1;	

	cout << "Bonjour !\n";
	while (action != 0) {
		ShowMenu();
		cin >> action;

		switch (action)
		{
		case 1: {
			list<User> users = ServiceUser().GetAll();
			for each (User user in users)
			{
				cout << user.ToString() + "\n";
			}
			break;
		}
		case 2: {
			int userId = 0;
			cout << "Veuillez renseigner un User ID\n";
			cin >> userId;
			try
			{
				User user = ServiceUser().Get(userId);
				cout << user.ToString() + "\n";
			}
			catch (const std::exception& error)
			{
				cout << error.what();
			}
			break;
		}
		case 3: {
			User user;

			cout << "Veuillez renseigner un prénom\n";
			cin >> user.firstname;
			cout << "Veuillez renseigner un nom\n";
			cin >> user.lastname;

			user = ServiceUser().Add(user);

			cout << user.ToString() + " - user add !";
		}
		case 4: {
			int userId = 0;
			cout << "Veuillez renseigner un User ID\n";
			cin >> userId;
			try
			{
				ServiceUser().Remove(userId);
				cout << "User supprimé !\n";
			}
			catch (const std::exception& error)
			{
				cout << error.what();
			}
			break;
		}
		default:
			break;
		}
	}
}