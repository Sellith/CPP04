/* *************************************************************************************************************** */
/*   dog.cpp                                                                                                       */
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


#include "Dog.hpp"


/* ================= Orthodox Canonical Form ================= */


Dog::Dog( void ) {
	type = "Dog";
	std::cout << GREEN << "Random" << WHITE << " Dog" << GREEN << " has been created" << RESET << std::endl;
}


Dog::Dog ( const Dog & src ) : Animal(src) {
	std::cout << CYAN << "Random" << WHITE << " Dog" << CYAN << " has been cloned" << RESET << std::endl;
}


Dog::~Dog ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " Dog" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


Dog & Dog::operator=( const Dog & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ======================== functions ======================== */


void	Dog::makeSound( void ) {
	std::cout << "Random Dog sound" << std::endl;
}

