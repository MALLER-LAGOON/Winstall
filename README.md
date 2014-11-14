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


MODO DE USO:

se utiliza igual que wget, pero con privilegios de ROOT:

>sudo winstall http://DIRECCION-WEB-DEL-PAQUETE.deb  (Requiere privilegios de ROOT)

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


HOW TO USE:

is the same as wget, but with ROOT privileges:

>sudo winstall http://WEB-ADDRESS-OF-THE-PACKAGE.deb (ROOT privileges are required)

It just allows to download .deb packages, since wget can do other kind of downloads.
by now, Winstall just supports ftp, http and https protocols.

LICENSE:

Winstall it's a opensource project, which lies under GPLv2 regulations. So it's modification, redistribution, merchandising and others are allowed under by the aforementioned license.

this is not a very ambitious proyect, it just try to get some comfort in the way to install .deb packages directly from web. The source code used is very simple, and the functions used on it were comfortably separated on properly named libraries, in a way that the code can be easy to understand and modificate.
Any suggestion or upgrade, please feel free to send it, but please, if its possible, show some code with your suggestions.
