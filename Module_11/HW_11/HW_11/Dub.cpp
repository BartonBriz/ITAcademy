#include "Dub.h"

Dub::Dub(std::string name, std::string vid) : Tree(name, vid, TypeTree::Dub)
{

}

void Dub::wind()
{
	std::cout << "It's Dub" << "\n" << "Vid: " << getVid() << std::endl;
}
