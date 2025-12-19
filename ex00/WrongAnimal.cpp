/* *************************************************************************************************************** */
/*   WrongAnimal.cpp                                                                                               */
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

#include "include/WrongAnimal.hpp"

/* ================= Orthodox Canonical Form ================= */


WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {
	std::cout << GREEN << "Random" << WHITE << " WrongAnimal" << GREEN << " has been created" << RESET << std::endl;
}


WrongAnimal::WrongAnimal ( const WrongAnimal & src ) : type(src.type) {
	std::cout << CYAN << "Random" << WHITE << " WrongAnimal" << CYAN << " has been cloned" << RESET << std::endl;
}


WrongAnimal::WrongAnimal ( std::string const & name ) : type(name) {
	std::cout << GREEN << "Random " << WHITE << name << GREEN << " has been created" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " WrongAnimal" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


WrongAnimal & WrongAnimal::operator=( const WrongAnimal & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ========================= Getters ========================= */


std::string	WrongAnimal::getType( void ) {
	return ( type );
}


/* ======================== functions ======================== */

void	WrongAnimal::makeSound( void ) {
	std::cout << "Random WrongAnimal sound" << std::endl;
}

