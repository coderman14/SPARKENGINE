#include <Spark.h>
class SandBox :public Spark::app {
public:
	SandBox()
	{

	}
	~SandBox() 
	{
	
	}
};
Spark::app* Spark::CreateApp() {
	return new SandBox();
}