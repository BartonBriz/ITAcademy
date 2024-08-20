
#include "tools.h"



int main()
{
	/*
	Car car(); //create class, Car - type , car - name
	Car* ptr_obj = new Car(); //create cache 
	delete ptr_obj; // clean ptr_obj
	auto sh_ptr = std::shared_ptr<Car>(new Car());
	*/

	Car stack_car{};
	Car* heap_car = new Car();
	std::shared_ptr<Car> s_ptr = std::shared_ptr<Car>(new Car());

	stack_car.length = 10; // stack use ( . )!
	//stack_car._model = "Tesla";

	heap_car->length = 0; // pointer use ( -> )!
	//heap_car->_model = "lada";

	s_ptr->length = 100;
	//s_ptr->_model = "BMW";

	stack_car.start();
	heap_car->start();
	s_ptr->start();




	}


