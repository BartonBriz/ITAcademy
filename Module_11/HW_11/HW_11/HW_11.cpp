
#include <iostream>
#include "typeTree.h"
#include "Dub.h"
#include "Klen.h"
#include "Sosna.h"
#include <memory>


int main()
{
	auto db = new Dub{"Dub", "Letniy"};
	//db->wind();
	//std::cout << TypeToString(db->getTypetree()) << std::endl;

	auto kl = new Klen{ "Klen", "obicknoveniy" };
	//kl->wind();
	//std::cout << TypeToString(kl->getTypetree()) << std::endl;
	auto kl_1 = new Klen("Klen", "Neobicnoveniy");

	auto sn = new Sosna{ "Sosna" , "Banksa" };
	//sn->wind();
	//std::cout << TypeToString(sn->getTypetree()) << std::endl;
	
	std::cout << "Shared: " <<"\n";
	std::shared_ptr<Dub> db1 = std::make_shared<Dub>(*db); // add object class Dub 
	db1->wind();
	std::cout << "Count: " << db1.use_count() << std::endl;

	std::shared_ptr<Klen> kl1 = std::make_shared<Klen>(*kl);
	kl1->wind();
	std::cout << "Count: " << kl1.use_count() << std::endl;
	std::shared_ptr<Klen> kl2 = std::make_shared<Klen>(*kl_1);
	kl2->wind();
	std::cout << "Count: " << kl2.use_count() << std::endl;
	std::shared_ptr<Klen> kl3 = kl2;
	kl3->wind();
	std::cout << "Count: " << kl2.use_count() << std::endl;
}

