/* *************************************************************************************************************** */
/*   main.cpp                                                                                                      */
/*   By: lvan-bre                                                                   .,                             */
/*                                                                                 okxl                            */
/*                                                                                xkddo                            */
/*                                                                               kkxddo                            */
/*                                                                              lxxddol                            */
/*                                                                              xxdolol.                           */
/*                                                                             :kxdddddl                 .ox,      */
/*                                                                       ..,cdkOOkkkxdddd'      ;o.     ckkd,      */
/*                                                               .,:coxOOOkkkkkkkxxxxxddddo:...lxdl.   ckkxd.      */
/*                                                           ;oxOOOOkkxxkxxxxxxxxxxdddddodddxxxkkxxxdlckkxdd.      */
/*                                                        ,oOOOkkkkxxxdddxdddddddddddddoooooodooddddooooddooc      */
/*                                                      ;kkkkkxxxxxddoooooooooooooooooooooooooollooooooololll      */
/*                                                     oxodddddoooooolllllllolooooollloooollllolllllloooolccl;     */
/*                                                    'x:::cclccllllccccccccccclllclllllllllllllllll     .;;cl;    */
/*                                                    d;c::cc:cc:::;::c:c:cccccclccc:cccclllllll,         .:cl.    */
/*                                                      c;,;:;;::::;;::::c..,cccllcc:c;;:lloodk.                   */
/*                                                        'ooooooooodddxxkkkOOOkOOOOOOc:cclllloo'                  */
/*                                                           .XXXXXXXKKXXXXXXXXXXXXXXXkcccclcccllo                 */
/*                                                                 ,KKKKKXXXXXXXXXXXXK0.  .:ccllclll;.             */
/*                                                                                           .ccccccllc,.          */
/*                                                                                                 :::cl:          */
/*                                                                                                                 */
/* *************************************************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"

int	main( void ) {

	Animal *	r = new Animal();
	Animal *	a = new Cat();
	Animal *	b = new Dog();
	Dog d;
	Dog cp(d);


	WrongAnimal * wr = new WrongAnimal;
	WrongAnimal * wa = new WrongCat;	

	// Animal *	weird = new WrongCat;

	std::cout << "\n" << CYAN;

	std::cout << "this is an " << r->getType() << std::endl;
	std::cout << "this is a " << a->getType() << std::endl;
	std::cout << "this is a " << b->getType() << std::endl;
	std::cout << "this is a " << cp.getType() << std::endl;

	std::cout << "\n";

	r->makeSound();
	a->makeSound();
	b->makeSound();

	std::cout << "\n" << CYAN;

	std::cout << "this is an " << wr->getType() << std::endl;
	std::cout << "this is a " << wa->getType() << std::endl;

	std::cout << "\n";

	wr->makeSound();
	wa->makeSound();

	std::cout << "\n" << RESET;

	delete(r);
	delete(a);
	delete(b);
	delete(wr);
	delete(wa);

}