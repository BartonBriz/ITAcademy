#include "Sosna.h"

Sosna::Sosna(std::string name, std::string vid) : Tree(name, vid, TypeTree::Sosna)
{

}

Sosna::~Sosna()
{
	std::cout << "Deleted Sosna" << std::endl;
}

void Sosna::wind()
{
	std::cout << "It's Sosna" << "\n" << "Vid: " << getVid() << std::endl;
}
