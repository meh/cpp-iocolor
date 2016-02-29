#include "iocolor"

int
main (int argc, char* argv[])
{
	std::cout << iocolor::color::red << "lol" << iocolor::color::reset << std::endl;
	std::cout << "wut" << std::endl;
	std::cout << iocolor::effects(iocolor::effect::bold | iocolor::effect::underline) << "omg" << iocolor::color::reset << std::endl;
	std::cout << iocolor::color(92) << "lel" << iocolor::color::reset << std::endl;
	std::cout << "her" << std::endl;

	return 0;
}
