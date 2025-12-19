/* *************************************************************************************************************** */
/*   animal.cpp                                                                                                    */
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

#include "Animal.hpp"


/* ================= Orthodox Canonical Form ================= */


Animal::Animal( void ) : type("animal") {
	std::cout << GREEN << "Random" << WHITE << " animal" << GREEN << " has been created" << RESET << std::endl;
}


Animal::Animal ( const Animal & src ) {
	type = src.type;
	std::cout << CYAN << "Random" << WHITE << " animal" << CYAN << " has been cloned" << RESET << std::endl;
}


Animal::Animal ( std::string const & name ) : type(name) {
	std::cout << GREEN << "Random " << WHITE << name << GREEN << " has been created" << RESET << std::endl;
}

Animal::~Animal ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " animal" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


Animal & Animal::operator=( const Animal & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ========================= Getters ========================= */


std::string	Animal::getType( void ) {
	return ( type );
}


/* ======================== functions ======================== */

void	Animal::makeSound( void ) {
	std::cout << "Random animal sound" << std::endl;
}

