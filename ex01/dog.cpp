/* *************************************************************************************************************** */
/*   dog.cpp                                                                                                  */
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


#include "dog.hpp"


/* ================= Orthodox Canonical Form ================= */


dog::dog( void ) {
	type = "dog";
	std::cout << GREEN << "Random" << WHITE << " dog" << GREEN << " has been created" << RESET << std::endl;
}


dog::dog ( const dog & src ) : animal(src) {
	type = src.type;
	std::cout << CYAN << "Random" << WHITE << " dog" << CYAN << " has been cloned" << RESET << std::endl;
}


dog::~dog ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " dog" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


dog & dog::operator=( const dog & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ======================== functions ======================== */


void	dog::makeSound( void ) {
	std::cout << "Random dog sound" << std::endl;
}

