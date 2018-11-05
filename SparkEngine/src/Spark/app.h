#pragma once
#include "internals.h"
namespace Spark {
	class SPARK_API app
	{
	public:
		app();
		virtual ~app();
		void Boot();
		
	};
	//to be defined in client
	app* CreateApp();
}