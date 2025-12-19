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


AAnimal::AAnimal( void ) : type("animal") {
	std::cout << GREEN << "Random" << WHITE << " Aanimal" << GREEN << " has been created" << RESET << std::endl;
}


AAnimal::AAnimal ( const AAnimal & src ) {
	type = src.type;
	std::cout << CYAN << "Random" << WHITE << " Aanimal" << CYAN << " has been cloned" << RESET << std::endl;
}


AAnimal::AAnimal ( std::string const & name ) : type(name) {
	std::cout << GREEN << "Random " << WHITE << name << GREEN << " has been created" << RESET << std::endl;
}

AAnimal::~AAnimal ( void ) {
	std::cout << YELLOW << "Random" << WHITE << " Aanimal" << YELLOW << " has ascended into an higher realm" << RESET << std::endl;
}


AAnimal & AAnimal::operator=( const AAnimal & src ) {
	if ( this != &src ) {
		type = src.type;
	}
	return ( *this );
}


/* ========================= Getters ========================= */


std::string	AAnimal::getType( void ) {
	return ( type );
}
