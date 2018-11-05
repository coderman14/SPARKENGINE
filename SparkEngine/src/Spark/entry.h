#pragma once
#ifdef SPR_PLATFORM_WINDOWS
extern Spark::app* Spark::CreateApp();
int main(int argc,char** argv) {
	printf("<Spark Engine*>/n");
	auto app = Spark::CreateApp();
	app->Boot();
	delete app;
}
#endif