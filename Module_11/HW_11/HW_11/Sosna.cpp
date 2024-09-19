#include "Sosna.h"

Sosna::Sosna(std::string name, std::string vid) : Tree(name, vid, TypeTree::Sosna)
{

}

void Sosna::wind()
{
	std::cout << "It's Sosna" << "\n" << "Vid: " << getVid() << std::endl;
}
