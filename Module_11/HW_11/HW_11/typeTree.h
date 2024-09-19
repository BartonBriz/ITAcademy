#pragma once
#include <iostream>
#include <string>

enum class TypeTree
{
	Dub = 0,
	Klen,
	Bereza,
	Elka,
	Sosna
};

inline std::string TypeToString(TypeTree typetree)
{
	switch(typetree)
	{
	case TypeTree::Dub:
		return "Dub";
	case TypeTree::Klen:
		return "Klen";
	case TypeTree::Bereza:
		return "Bereza";
	case TypeTree::Elka:
		return "Elka";
	case TypeTree::Sosna:
		return "Sosna";
	}
}