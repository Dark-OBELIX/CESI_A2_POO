#include "pch.h"
#include "ServiceUser.h"

namespace AppUserManager_Core_Services {
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	list<User> ServiceUser::GetAll()
	{
		list<User> users;

		DataRowCollection^ results = this->dataContext.Fetch(DataContext::Tables::Users, 
			"SELECT * FROM users");
		for each (DataRow ^ result in results)
		{
			User user;
			user.id = std::stoi(this->dataContext.ToUnmanagedString(result["id"]->ToString()));
			user.firstname = this->dataContext.ToUnmanagedString(result["firstname"]->ToString());
			user.lastname = this->dataContext.ToUnmanagedString(result["lastname"]->ToString());

			users.push_back(user);
		}

		return users;
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="id"></param>
	/// <returns></returns>
	User ServiceUser::Get(int id) {
		DataRowCollection^ results = this->dataContext.Fetch(DataContext::Tables::Users, "SELECT * FROM users WHERE id = " + std::to_string(id));

		if (results->Count == 0)
			throw std::runtime_error("user not found !");

		DataRow^ row = results[0];

		User user;
		user.id = std::stoi(this->dataContext.ToUnmanagedString(row["id"]->ToString()));
		user.firstname = this->dataContext.ToUnmanagedString(row["firstname"]->ToString());
		user.lastname = this->dataContext.ToUnmanagedString(row["lastname"]->ToString());

		return user;
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="user"></param>
	/// <returns></returns>
	User ServiceUser::Add(User user) {
		user.id = this->dataContext.Insert("INSERT INTO users (firstname, lastname) VALUES ('" + user.firstname + "', '" + user.lastname + "')");
		return user;
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="id"></param>
	void ServiceUser::Remove(int id) {
		this->dataContext.Query("DELETE FROM users WHERE id = " + std::to_string(id));
	}
}