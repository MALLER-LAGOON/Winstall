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

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//#include "winstall-messages.c"

void winstall(char *argument);
void DPKG_INSTALL(char *webaddress);
int DIR_PROBE(char *dir);
void WGET_DOWNLOAD(char *webaddress);
int DEB_PROBE(char *webaddress);

int DEB_PROBE(char *webaddress)
{
	char DPKG_pkg[WINSTALL_STRING_COUNTER];//for the package.deb
	char DEB_IN[WINSTALL_STRING_COUNTER];	
	char DEB_CMP[]="deb";
	int loopy, chari, counter,j;

	counter=strlen(webaddress);
	DPKG_pkg[0]='\0';
	DEB_IN[0]='\0';

	for(loopy=0;loopy<=counter-1;loopy++)/*encontramos el paquete.deb*/
	{
		if(webaddress[loopy]=='/')
		{
			chari=loopy+1;
		}
	}
	printf("\n\n");

	for(loopy=chari,j=0;loopy<=counter-1;loopy++,j++)/*CREAMOS EL PAQUETE.deb*/
	{
		strcpy(&DPKG_pkg[j],&webaddress[loopy]);
	}

	counter=strlen(DPKG_pkg);//reciclamos la variable counter

	for(loopy=0;loopy<=counter-1;loopy++)/*encontramos el paquete.deb*/
	{
		if(DPKG_pkg[loopy]=='.')
		{
			chari=loopy+1;
		}
	}

	printf("\n\n");

	for(loopy=chari,j=0;loopy<=counter-1;loopy++,j++)/*CREAMOS EL deb DE COMPARACION*/
	{
		strcpy(&DEB_IN[j],&DPKG_pkg[loopy]);
	}

	for(j = 0; DEB_IN[j]; j++)
	{
		DEB_IN[j] = tolower(DEB_IN[j]);
	}

	if (strcmp(DEB_CMP,DEB_IN)==0)
	{
		PKG_fnd(DPKG_pkg);
		return 0;
	}
	else
	{
		return 1;
	}
}

int DIR_PROBE(char *dir)
{
	char TEST_HTTP[]="http";
	char TEST_FTP[]="ftp:";
	char TEMP[3];
	int counter=0;
	int loopy;

	for(loopy=0;loopy<=3;loopy++)
	{
		TEMP[loopy]=dir[loopy];
	}
	TEMP[loopy]='\0';

	for(loopy=0; TEMP[loopy]; loopy++)
	{
		TEMP[loopy] = tolower(TEMP[loopy]); /*we validate the link protocol*/
	}

	if(strcmp(TEST_HTTP,TEMP)==0)
	{
		printf("\x1b[1;32mProtocolo \x1b[1;37mHTTP/HTTPS \x1b[1;32mReconocido.\x1b[0;0m");
		return 0;
	}
	else if(strcmp(TEST_FTP,TEMP)==0)
	{
		printf("\x1b[1;32mProtocolo \x1b[1;37mFTP \x1b[1;32mReconocido\x1b[0;0m");
		return 0;
	}
	else
	{
		printf("\x1b[1;31mERROR Protocolo no reconocido\x1b[0;0m\n\n");
		return 1;
	}
}

void WGET_DOWNLOAD(char *webaddress)
{
	char WGET_DWLD[WINSTALL_STRING_COUNTER];
	char WGET_CMD[]="wget ";
	int j,i;

	for(j=0;j<=4;j++)
	{
		strcpy(&WGET_DWLD[j],&WGET_CMD[j]);
	}

	for(i=0,j=5;i<=strlen(webaddress)-1;j++,i++)
	{
		strcpy(&WGET_DWLD[j],&webaddress[i]);
	}
	system(WGET_DWLD);
}

void winstall(char *argument)
{
	int i,j;
	if(strcmp("--version",argument)==0||strcmp("-v",argument)==0)/*para verificar la version*/
	{
		WINSTALL_VER();
	}
	else if(strcmp("--about",argument)==0||strcmp("-a",argument)==0)/*acerca de*/
	{
		WINSTALL_ABT();
	}
	else if(strcmp("--help",argument)==0||strcmp("-h",argument)==0)/*para mostrar ayuda*/
	{
		WINSTALL_HLP();
	}
	else if(strcmp("--gui",argument)==0)/*Activa interfaz GTK+ de Winstall*/
	{
		DEV_MSG();
		exit(0);
	}
	else
	{
		if(DIR_PROBE(argument)==0)
		{
			if(DEB_PROBE(argument)==0)
			{
				WGET_DOWNLOAD(argument);
				DPKG_INSTALL(argument);
			}
			else
			{
				DEB_PROBE_ERROR();
				exit(0);
			}
		}
		else
		{
			DIR_PROBE_ERROR();
			exit(0);
		}
	}
}

void DPKG_INSTALL(char *webaddress)
{
	int counter, loopy, chari,j,i;
	char DPKG_pkg[WINSTALL_STRING_COUNTER];//for the package.deb
	char DPKG_INSTALLING[WINSTALL_STRING_COUNTER];//to install the .deb package
	char DPKG_CMD[]="dpkg -i ";

	counter=strlen(webaddress);
	DPKG_pkg[0]='\0';
	DPKG_INSTALLING[0]='\0';

	for(loopy=0;loopy<=counter-1;loopy++)/*find the .deb package*/
	{
		if(webaddress[loopy]=='/')
		{
			chari=loopy+1;
		}
	}
	printf("\n\n");

	for(loopy=chari,j=0;loopy<=counter-1;loopy++,j++)/*Create de .deb package*/
	{
		strcpy(&DPKG_pkg[j],&webaddress[loopy]);
	}

	for(j=0;j<=7;j++)
	{
		strcpy(&DPKG_INSTALLING[j],&DPKG_CMD[j]); /*Evidently we copy the first argument*/
	}

	for(i=0,j=8;i<=strlen(DPKG_pkg)-1;j++,i++)
	{
		strcpy(&DPKG_INSTALLING[j],&DPKG_pkg[i]);/*Now we copy the name of the package*/
	}

	system(DPKG_INSTALLING); /*Here we call to dpkg installer with the full command*/

	printf("\n\n");
}