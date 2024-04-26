#pragma once
#include "DataContext.h"

using namespace AppUserManager_Core_Data;

namespace AppUserManager_Core_Services {
	ref class AbstractService
	{
	protected:
		DataContext dataContext;
	public:
		AbstractService();
	};
}