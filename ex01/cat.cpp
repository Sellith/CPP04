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


#include "cat.hpp"


/* ================= Orthodox Canonical Form ================= */


cat::cat( void ) {
	type = "cat";
	std::cout << GREEN << "Random" << WHITE << " cat" << GREEN << " has been created" << RESET << std::endl;
}


cat::cat ( const cat & src ) : animal(src) {
	type = src.type;
	std::cout << CYAN << "Random" << WHITE << " cat" << CYAN << " has been cloned" << RESET << std::endl;
}


cat::~cat ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " cat" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


cat & cat::operator=( const cat & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ======================== functions ======================== */


void	cat::makeSound( void ) {
	std::cout << "Random cat sound" << std::endl;
}

