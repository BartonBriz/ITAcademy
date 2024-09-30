
#include "STO.h"



int main()
{
    STO<Passenger> ps;
    Passenger ps1{ "BMW", "5646564RST21" };
    Passenger ps2{ "Volvo", "546421RSP434" };
    Passenger ps3{ "Mazda", "054234ASDE496" };
    ps.AddCar(ps1);
    ps.AddCar(ps2);
    ps.AddCar(ps3);
    ps.AddCar(ps1);
    ps.AddCar(ps1);
    ps.AddCar(ps1); // it's 6 elemts not add car
    ps.pritn();
    STO<Cargo> cr;
    Cargo cr1{ "Volvo" , "475737FFE323" };
    cr.AddCar(cr1);
    cr.AddCar(cr1);
    cr.AddCar(cr1);
    cr.pritn();
    cr.repairAll(cr1);
    ps.pritn();
    ps.repairAll(ps1);

}

