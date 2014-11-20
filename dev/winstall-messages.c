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
#define WINSTALL_STRING_COUNTER 1000

void winstall_error(void);
void WINSTALL_HLP(void);
void DIR_PROBE_ERROR(void);
void DEB_PROBE_ERROR(void);
void WINSTALL_VER(void);
void WINSTALL_ABT(void);
void ROOT_ADV(void);
void PKG_fnd(char *DPKG_pkg);
void DEV_MSG(void);

void PKG_fnd(char *DPKG_pkg)
{
	printf("\x1b[1;32mEncontrado: \x1b[1;33m%s\x1b[1;32m, se procede a la instalacion\x1b[0;0m", DPKG_pkg);
}

void winstall_error(void) /*mensaje de error*/
{
	WINSTALL_HLP();
	printf("\x1b[1;31m\tWINSTALL NO PUEDE LEER TU MENTE!!!\x1b[0;0m\n"
		   "\n\n\n");
}

void WINSTALL_HLP(void)
{
	printf("\n\n\x1b[1;33mMODO DE USO\x1b[0;0m\n"
		   "\x1b[1;34m===========\x1b[0;0m\n"
		   "\n\n"
		   "al igual que con wget, tan solo es necesario colocar la direccion web para realizar la descarga.\n"
		   "\n"
		   "este programa tan solo gestiona la descarga con wget y posterior instalacion con dpkg de los paquetes descargados, por lo que requiere privilegios de administrador.\n"
		   "\n\n"
		   "\x1b[1;33mOpciones:\t \x1b[1;32mwinstall\x1b[1;31m [Opcion]\x1b[0;0m\n"
		   "\x1b[1;34m========\x1b[0;0m\n\n"
		   "\x1b[0;33m--about \x1b[1;37mo \x1b[0;33m-a:\x1b[0;0m:\x1b[0;0m\t\t\tinformacion acerca de la aplicacion.\n"
		   "\x1b[0;33m--help \x1b[1;37mo \x1b[0;33m-h:\x1b[0;0m\t\t\tmuestra esta pagina de informaciones.\n"
		   "\x1b[0;33mhttp://Direccion-Web.com:\x1b[0;0m\tcorresponde a la direccion web del paquete .deb a instalar\n\n\n");
}

void DIR_PROBE_ERROR(void)
{
	printf("\x1b[1;33mla dirección web u opción ingresada no se reconoce como protocolo válido para Winstall,\n"
			"debes colocar la URL completa con el \x1b[1;31mhttp://\x1b[1;33m,\x1b[1;31m https:// \x1b[1;33mo el \x1b[1;31mftp://\x1b[0;0m\n\n"
			"\x1b[1;32msi lo has hecho de esa manera, probablemente la dirección web ingresada no es válida\x1b[0;0m\n\n");
}

void DEB_PROBE_ERROR(void)
{
	printf("\t\x1b[1;31mEsta dirección no contiene un packete .deb valido\x1b[0;0m\n"
		   "\n\t\t\x1b[1;33mpor favor, revisa la URL e intenta denuevo\n\n\x1b[0;0m");
}

void WINSTALL_VER(void)
{
	printf("\t\t\x1b[1;33mWinstall\x1b[0;0m \x1b[1;32mv0.6.5\x1b[0;0m\n\n");
}

void WINSTALL_ABT(void)
{
	printf("\x1b[1;32mWinstall \x1b[1;33mes una aplicación que gestiona la descarga y posterior instalación de archivos \x1b[1;31m.deb \x1b[1;33men un solo paso.\x1b[0;0m\n"
		   "\n\t\t\x1b[1;33mpara mayor información porfavor utilice: \x1b[1;35m\'\x1b[1;37mwinstall --help\x1b[1;35m\'\x1b[0;0m\n\n");
}

void ROOT_ADV(void)
{
	printf("\x1b[1;31m\tSe requieren privilegios de ROOT\x1b[0;0m\n\n");
}

void DEV_MSG(void)
{
	printf("\t\t\x1b[1;33mESTA OPCION AUN ESTA EN DESARROLLO!!!\x1b[0;0m\n\n");
}