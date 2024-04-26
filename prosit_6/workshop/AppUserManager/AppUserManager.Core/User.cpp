#include "pch.h"
#include "User.h"

namespace AppUserManager_Core_Data_DAO {
	/// <summary>
	/// 
	/// </summary>
	User::User() {}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="id"></param>
	/// <param name="firstname"></param>
	/// <param name="lastname"></param>
	User::User(int id, std::string firstname, std::string lastname) {
		this->id = id;
		this->firstname = firstname;
		this->lastname = lastname;
	}

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	std::string User::ToString() {
		return "User ID" + std::to_string(this->id) + " | " + this->firstname + " " + this->lastname;
	}
}