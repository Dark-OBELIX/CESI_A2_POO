#pragma once
#include <string>

namespace AppUserManager_Core_Data_DAO {
	public class User
	{
	public:
		int id;
		std::string firstname;
		std::string lastname;

		User();
		User(int id, std::string firstname, std::string lastname);
		std::string ToString();
	};
}