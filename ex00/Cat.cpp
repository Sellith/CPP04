/* *************************************************************************************************************** */
/*   cat.cpp                                                                                                       */
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


/* ================= Orthodox Canonical Form ================= */


Cat::Cat( void ) : Animal("Cat") {
	std::cout << GREEN << "Random" << WHITE << " Cat" << GREEN << " has been created" << RESET << std::endl;
}


Cat::Cat ( const Cat & src ) : Animal(src) {
	std::cout << CYAN << "Random" << WHITE << " Cat" << CYAN << " has been cloned" << RESET << std::endl;
}


Cat::~Cat ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " Cat" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


Cat & Cat::operator=( const Cat & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ======================== functions ======================== */


void	Cat::makeSound( void ) {
	std::cout << "Random Cat sound" << std::endl;
}

