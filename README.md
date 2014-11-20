Winstall
========

ESPAÑOL:

Es una administrador de instalacion web, el cual te permite poder instalar utilizando wget y dpkg en una sola linea, gestionando la descarga y posterior instalacion del paquete .deb solamente con la indicacion de la direccion web de descarga.

DEPENDENCIAS:

para ser compilado solo requiere librerias estandar, este sistema ha sido programado en C. sin embargo para su funcionalidad es necesario que se encuentren instalados los paquetes wget y dpkg, los cuales usualmente se encuentran instalados de manera nativa en las distribuciones Debian y Debian-like como Ubuntu.

para compilar e instalar en 1 solo paso:

>sudo make all  (Requiere privilegios de ROOT)

otros argumentos para make:

>make		➳ Solamente compila proyecto

>make clean	➳ borra del directorio los archivos compilados 

>sudo make all	➳ Compila proyecto y lo instala automaticamente (Requiere privilegios de ROOT)

>sudo make install	➳ instala el proyecto compilado (Requiere privilegios de ROOT)

>sudo make uninstall	➳ desinstala el proyecto instalado (Requiere privilegios de ROOT)

DEB:

Cabe señalar, que en la carpeta Deb de este repositorio se encuentra el instalador .deb de Winstall.

<code>Se ha determinado una convención propia del proyecto, en la cual se establece que el paquete.deb que tenga su primera letra mayúscula corresponde a la versión mas actual, que se corresponde con las modificaciones publicadas del codigo fuente.
Las versiones anteriores se renombran con todas sus letras en minusculas, con su numero de version sin puntos de separación</code>

MODO DE USO:

se utiliza igual que wget, pero con privilegios de ROOT:

<code>sudo winstall http://DIRECCION-WEB-DEL-PAQUETE.deb</code>  (Requiere privilegios de ROOT)

Tambien permite la descarga de varios paquetes de manera simultanea, tal como dpkg:

<code>sudo winstall http://direccion.web/paquete1.deb http://direccion.web/paquete2.deb ...</code> etc.

solamente sirve para realizar descargas de paquetes .deb, dado que para las otras descargas se tiene directamente wget.
por ahora Winstall solamente tiene soporte para los protocolos ftp, http y https.

LICENCIA:

Winstall es un proyecto de caracter opensource, sometido a la normativa de GPLv2, por lo que su modificacion, redistribucion, comercializacion y demases se encuentra permitido bajo la normativa anteriormente mencionada.

este no es un proyecto muy ambicioso, solamente busca generar comodidad en la instalacion de los paquetes .deb, el codigo utilizado para poder realizar este programa es muy sencillo, y las funciones empleadas han sido comodamente separadas en librerias adecuadamente nombradas, de manera que sea facil de entender y poder modificar el codigo.
cualquier sugerencia o actualizacion, no duden en realizarla, pero por favor en lo posible muestren algo de codigo en sus sugerencias.


ENGLISH:

A web installing manager for Linux, which manage the use of wget and dpkg on one console command, that allows the download and the respective installation of a .deb package just from the download url.

DEPENDENCIES:

to compile, it just requires the basic standard libraries, this system has been developed on C language. However, for its functionality it's necesary that dpkg and wget been installed, which usually are installed by default on Debian and Debian-like distributions like Ubuntu.

to compile and install in 1 step:

>sudo make all (ROOT privileges are required)

another make arguments:

>make		➳ Just compile the proyect

>make clean	➳ Erase all the compiled files from the directory

>sudo make all	➳ Compile and install proyect (ROOT privileges are required)

>sudo make install	➳ Just install the previous compiled proyect (ROOT privileges are required)

>sudo make uninstall	➳ Just uninstall winstall from the system (ROOT privileges are required)

DEB:

should be noted that in the Deb folder of this repositorie, u can found a .deb installer of Winstall.

<code>It has given the project its own convention, which states that the package.deb having its first capital letter corresponding to the most current version, which corresponds to the latest amendments published the source code.
Previous versions are renamed with all lowercase letters with its version number without breakpoints.</code>

HOW TO USE:

is the same as wget, but with ROOT privileges:

<code>sudo winstall http://WEB-ADDRESS-OF-THE-PACKAGE.deb</code> (ROOT privileges are required)

Also allows multiple package download at the same time like real dpkg:

<code>sudo winstall http://web.address/package1.deb http://web.address/package2.deb ...</code> etc.

It just allows to download .deb packages, since wget can do other kind of downloads.
by now, Winstall just supports ftp, http and https protocols.

LICENSE:

Winstall it's a opensource project, which lies under GPLv2 regulations. So it's modification, redistribution, merchandising and others are allowed under by the aforementioned license.

this is not a very ambitious proyect, it just try to get some comfort in the way to install .deb packages directly from web. The source code used is very simple, and the functions used on it were comfortably separated on properly named libraries, in a way that the code can be easy to understand and modificate.
Any suggestion or upgrade, please feel free to send it, but please, if its possible, show some code with your suggestions.
