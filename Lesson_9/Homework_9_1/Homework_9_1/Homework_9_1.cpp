

#include "tree.h"
#include "forest.h"



int main()
{
    Tree a{ "Elka" }; //obj first
    Tree b{ a };      // obj copy
    Tree c{ "Sosna" };
    Tree e{ "Dub" };
    Tree d{ "Klen" };
    Tree f{ b };
    Tree i{ "Bereza" };
    Tree o{ i };
    Tree g{ e };

    std::cout << "\n" << "\n" << "\n" << "\n";
    Forest aa{};
    std::cout << std::endl;
    aa.growUP(c);
    std::cout << std::endl;
    aa.wind();
    std::cout << std::endl;
    Forest bb{aa};
    bb.growUP(i);
    std::cout << std::endl;
    bb.wind();


    aa.cutAll();
    aa.wind();
    std::cout << "\n" << "\n" << "\n" << "\n";
   
}
