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


/********************************************************/
/* This file is just a temporary fix, winstall needs to */
/* recognize the system language, and show the messages */
/* in those language by it self.                        */
/********************************************************/

#include <string.h>
#include "wait.h"
#define WINSTALL_STRING_COUNTER 10000

void winstall_error(void);
void WINSTALL_HLP(void);
void DIR_PROBE_ERROR(void);
void DEB_PROBE_ERROR(void);
void WINSTALL_VER(void);
void WINSTALL_ABT(void);
void ROOT_ADV(void);

void winstall_error(void) /*mensaje de error*/
{
	WINSTALL_HLP();
	printf("WINSTALL NO PUEDE LEER TU MENTE!!!\n"
		   "\n\n\n");
}

void WINSTALL_HLP(void)
{
	printf("\n\nMODO DE USO\n"
		   "===========\n"
		   "\n\n"
		   "al igual que con wget, tan solo es necesario colocar la direccion web para realizar la descarga.\n"
	       "\n"
	       "este programa tan solo gestiona la descarga con wget y posterior instalacion con dpkg de los paquetes descargados, por lo que requiere privilegios de administrador.\n"
	       "\n\n"
	       "Opciones:\t winstall [Opcion]\n"
	       "========\n\n"
	       "--about:\t\tinformacion acerca de la aplicacion.\n"
	       "--help o -h:\t\tmuestra esta pagina de informaciones.\n"
	       "Direccion Web:\t\tcorresponde a la direccion web del paquete .deb a instalar\n\n\n");
}

void DIR_PROBE_ERROR(void)
{
	printf("\n"
			"la direccion web ingresada no se reconoce como protocolo valido para Winstall,\n"
			"debes colocar la URL completa con el http:// o el ftp://\n\n"
			"si lo has hecho de esa manera, probablemente la direccion web ingresada no es valida\n\n");
}

void DEB_PROBE_ERROR(void)
{
	printf("\n"
			"Esta direccion no contiene un packete .deb valido\n"
			"por favor, revisa la URL e intenta denuevo\n\n");
}

void WINSTALL_VER(void)
{
	printf("\nWinstall v0.5.5\n\n");
}

void WINSTALL_ABT(void)
{
	printf("\nWinstall es una aplicacion que gestiona la descarga y posterior instalacion de archivos .deb en un solo paso.\n"
		   "para mayor informacion utilice winstall --help\n\n");
}

void ROOT_ADV(void)
{
	printf("Se requieren privilegios de ROOT\n");
}