/* *************************************************************************************************************** */
/*   WrongCat.cpp                                                                                                       */
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

#include "include/WrongCat.hpp"

/* ================= Orthodox Canonical Form ================= */


WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << GREEN << "Random" << WHITE << " WrongCat" << GREEN << " has been created" << RESET << std::endl;
}


WrongCat::WrongCat ( const WrongCat & src ) : WrongAnimal(src) {
	std::cout << CYAN << "Random" << WHITE << " WrongCat" << CYAN << " has been cloned" << RESET << std::endl;
}


WrongCat::~WrongCat ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " WrongCat" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


WrongCat & WrongCat::operator=( const WrongCat & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ======================== functions ======================== */


void	WrongCat::makeSound( void ) {
	std::cout << "Random WrongCat sound" << std::endl;
}

