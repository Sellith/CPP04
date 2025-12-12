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

#include "animal.hpp"


/* ================= Orthodox Canonical Form ================= */


animal::animal( void ) : type("animal") {
	std::cout << GREEN << "Random" << WHITE << " animal" << GREEN << " has been created" << RESET << std::endl;
}


animal::animal ( const animal & src ) {
	type = src.type;
	std::cout << CYAN << "Random" << WHITE << " animal" << CYAN << " has been cloned" << RESET << std::endl;
}


animal::~animal ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " animal" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


animal & animal::operator=( const animal & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ========================= Getters ========================= */


std::string	animal::getType( void ) {
	return ( type );
}


/* ======================== functions ======================== */

void	animal::makeSound( void ) {
	std::cout << "Random animal sound" << std::endl;
}

