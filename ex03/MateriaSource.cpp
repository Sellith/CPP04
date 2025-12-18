/* *************************************************************************************************************** */
/*   MateriaSource.cpp                                                                                             */
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

# include "MateriaSource.hpp"

MateriaSource::MateriaSource ( void ) {
	for ( int i = 0 ; i < MAX_MATERIA ; i++)
		materia[i] = NULL;
}

MateriaSource::MateriaSource ( const MateriaSource & src ) {
	*this = src;
}

MateriaSource::~MateriaSource ( void ) {
	for ( int i = 0 ; i < MAX_MATERIA && materia[i] ; i++)
		delete materia[i];
}

MateriaSource & MateriaSource::operator= ( const MateriaSource & src ) {
	for ( int i = 0 ; i < MAX_MATERIA ; i++)
		materia[i] = src.materia[i];
	return ( *this );
}

void	MateriaSource::learnMateria ( AMateria * src ) {
	for ( int i = 0 ; i < MAX_MATERIA ; i++) {
		if (!materia[i]) {
			materia[i] = src;
			return ;
		}
	}
	delete (src);
	std::cout << RED << "No slots left to learn materias" << RESET << std::endl;
}

AMateria *	MateriaSource::createMateria ( std::string const & type ) {

	AMateria *	tmp;

	for (int i = 0 ; i < MAX_MATERIA ; i++) {
		if (materia[i]->getType() == type) {
			tmp = materia[i];
			return (tmp);
		}
	}

	std::cout << RED << "MATERIA " << type << " NOT LEARNED" << RESET << std::endl;
	return (NULL);
}