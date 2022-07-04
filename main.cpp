#include <iostream>
#include <clap/clap.h>
#include <QtWidgets/QApplication>

static const constexpr clap_version m = CLAP_VERSION;

int main(int argc, char *argv[]) {
	std::cout << "Hello, World!" << std::endl;
	QApplication a(argc, argv);
	clap_param_info param_info;
	param_info.module[0] = 'm';

	return a.exec();
}
