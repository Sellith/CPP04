/* *************************************************************************************************************** */
/*   Character.cpp                                                                                                  */
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

# include "Character.hpp"

void	Character::materia_init ( void ) {
	for ( int i = 0 ; i < MAX_MATERIA ; i++)
		_materia[i] = NULL;
}

Character::Character ( void ) : _name("default") {
	materia_init();
}

Character::Character ( std::string const & name ) : _name(name) {
	materia_init();
}

Character::Character ( const Character & src) : _name(src._name) {
	for ( int i = 0 ; i < MAX_MATERIA ; i++)
		_materia[i] = src._materia[i];
}

Character::~Character ( void ) {
	for (int i = 0 ; i < MAX_MATERIA ; i++)
		unequip(i);
}

Character & Character::operator= ( const Character & src ) {
	if (this != &src) {
		for ( int i = 0 ; i < MAX_MATERIA ; i++)
			_materia[i] = src._materia[i];
		_name = src._name;
	}
	return ( *this );
}


/* ------ */


std::string const & Character::getName ( void ) const {
	return (_name);
}

void	Character::equip ( AMateria* materia ) {
	if (!materia)
		return ;
	for (int i = 0 ; i < MAX_MATERIA ; i++) {
		if (!_materia[i]) {
			_materia[i] = materia;
			return ;
		}
	}

	std::cout << RED << "There are no free slots to equip this materia" << RESET << std::endl;
}

void	Character::unequip ( int idx ) {
	if (!_materia[idx])
		return ;
	else 
		_materia[idx] = NULL;
}

void	Character::use ( int idx, ICharacter & target ) {
	if (idx >= 4 || idx < 0) {
		std::cout << RED << "Invalid materia index" << RESET << std::endl;
		return ;
	}
	if (_materia[idx])
		_materia[idx]->use( target );
}