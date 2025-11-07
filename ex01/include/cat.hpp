/* *************************************************************************************************************** */
/*   cat.hpp                                                                                                  */
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

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include "animal.hpp"

class cat : public animal {

public:

	cat ( void );
	cat ( const cat & src );

	~cat ( void );

	cat & operator= ( const cat & src );

	void	makeSound ( void );
	
};

#endif