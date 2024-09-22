#include "Klen.h"

Klen::Klen(std::string name, std::string vid): Tree(name,vid, TypeTree::Klen)
{

}

Klen::~Klen()
{
	std::cout << "Deleted Klen." << std::endl;
}

void Klen::wind()
{
	std::cout << "It's Klen" << "\n" << "Vid: "<< getVid() << std::endl;
}
