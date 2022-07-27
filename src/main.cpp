/**
 * Author : github@ jinpa-t
 * Desciption: Implementation with the Decorator Pattern for coffe shop. 
 *             This code is translated from head first design book. 
 * Date: 7/22/2022
*/
#include <iostream>
#include "Beverage.h"
#include "CondimentDecorator.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"
#include "Decaf.h"
#include "HouseBlend.h"


int main()
{
    Beverage *beverage = new Espresso();
    std::cout <<beverage->getDescription() << " $" << beverage->cost() << std::endl;
    
    Beverage* beverage2 = new DarkRoast();
    // wrap with a Mocha
    beverage2 = new Mocha(beverage2);
    // wrap with a second Mocha
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    std::cout <<beverage2->getDescription() << " $" << beverage2->cost() << std::endl;
    
    Beverage *beverage3 = new HouseBlend();
    beverage3 = new Soy(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    std::cout <<beverage3->getDescription() <<  " $" << beverage3->cost() << std::endl;
  
    Beverage *beverage4 = new Decaf();
    std::cout <<beverage4->getDescription() << " $" << beverage4->cost() << std::endl;
    delete beverage;
    delete beverage2;
    delete beverage3;
    delete beverage4;
    
    return 0;
}
