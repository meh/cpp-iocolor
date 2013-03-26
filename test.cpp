#include "iocolor"

int
main (int argc, char* argv[])
{
	std::cout << std::color::red << "lol" << std::color::reset << std::endl;
	std::cout << "wut" << std::endl;
	std::cout << std::effects(std::effect::bold | std::effect::underline) << "omg" << std::color::reset << std::endl;
	std::cout << std::color(92) << "lel" << std::color::reset << std::endl;
	std::cout << "her" << std::endl;

	return 0;
}
