#include "Dub.h"

Dub::Dub(std::string name, std::string vid) : Tree(name, vid, TypeTree::Dub)
{

}

void Dub::wind()
{
	std::cout << "\nIt's Dub" << "\n" << "Vid: " << getVid() << std::endl;
}
