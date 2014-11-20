/*   Winstall
 *   ========
 *   this software looks to simplify the way to download and install ".deb"
 *   packages from external sites different to official repositories on just
 *   one line command, managing the use of wget & dpkg for it
 *
 *   Copyright (C) 2014  Maller Lagoon
 *   Contact mail: <maller.lagoon@gmail.com>
 *   Source Main Page: https://github.com/MALLER-LAGOON/Winstall
 *   Official Facebook Page: https://www.facebook.com/winstall.linux
 *
 *   This program is free software; you can redistribute it and/or modify  
 *   it under the terms of the GNU General Public License as published by  
 *   the Free Software Foundation; either version 2 of the License, or     
 *   (at your option) any later version.                                   
 *                                                                         
 *   This program is distributed in the hope that it will be useful,       
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         
 *   GNU General Public License for more details.                          
 *                                                                         
 *   You should have received a copy of the GNU General Public License     
 *   along with this program; if not, write to the                         
 *   Free Software Foundation, Inc.,                                       
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#include <stdio.h>
#include <signal.h>
#include "dev/winstall-messages.c"
#include "dev/winstall-functions.c"



int main(int argc,char* argv[])
{
	int loopy;
	printf("\n");
	if(getuid()!=0) /*ROOT Verification*/
	{
		ROOT_ADV();
		return(0);
	}
	else
	{
		if(argc==1)
		{
			winstall_error();
			return(0);
		}
		else
		{
			for(loopy=0;loopy<argc;loopy++)
			{
				winstall(argv[loopy+1]);
			}
			return(0);
		}
	}
}