#include <list>
#include "User.h"
#include "AbstractService.h"

using namespace std;
using namespace AppUserManager_Core_Data_DAO;

namespace AppUserManager_Core_Services {
	ref class ServiceUser : AbstractService
	{
	public:
		list<User> GetAll();
		User Get(int id);
		User Add(User user);
		void Remove(int id);
	};
}