Pupjibaro
=========

Remaster de Puppy retro-precise, repo de actualizaciones

### [Link de descarga version oficial Pupjibaro](https://www.dropbox.com/s/nrz5nxksyod7w4x/puppy_Pupjibaro-29-03-2014-1.0.3.iso)

### [Mirror de puppy_Pupjibaro-29-03-2014-1.0.3.iso](http://ubuntuone.com/4nsOsaphHrfOxWReCaLzHj)

MD5SUM - a41fa4af707f8f956ed8f5789b4b87e7   puppy_Pupjibaro-29-03-2014-1.0.3.iso   197 MB

### [Pupjibaro con opción memtest](http://ubuntuone.com/3FAWT2GChlT2WsonriVs0f)

MD5SUM - 2cd3475e26be7394ffde929a14a78730    Pupjibaro_memtest-1.0.3   207 MB

###  [Pupjibaro_devx_full "Librerias para Compilar"](https://www.dropbox.com/s/2nd7dp55mkb87by/devx_Full_Pupjibaro.sfs)

MD5SUM - 463da70bc5c1d516d972b023985aca14   devx_Full_Pupjibaro.sfs   238 MB

### [Mirror de Pupjibaro_devx_full](http://ubuntuone.com/1AdImjrL4rClX9ZdJaDUw6)

MD5SUM - 463da70bc5c1d516d972b023985aca14   devx_Full_Pupjibaro.sfs   238 MB

### [Mirror en archive.org 'por Ally'](https://archive.org/details/Puppy_Linux_Pubjibaro)

### Actualizaciones ( Ver CHANGELOG )
------------------------------------

[Jibaupdate_31032014-1.0.1.pet](http://ubuntuone.com/7RNjMRQwaAWfAKGbgX4ibo)

MD5SUM ace293195ab6f85556609036fd89a3fa 183 K 

## PuppyLinux versión Pupjibaro-1.0.3 
=====================================
[![screenshot](http://s5.postimg.org/jnlemdfvr/jibadesk.png)](http://s5.postimg.org/jnlemdfvr/jibadesk.png)

[![screenshot](http://s25.postimg.org/e0qmkpnkf/Pupjibaro.gif)](http://s25.postimg.org/e0qmkpnkf/Pupjibaro.gif)

Pupjibaro es un remaster de la versión oficial de Puppylinux retro precise 5.7.1
pensada en usuarios con equipos modestos 256 - 1 Giga de ram y con pocos conocimientos
sobre linux, por lo que cuenta con una serie de asistentes y aplicaciones que hacen más
fácil el uso de esta versión, traducida en un 95% ( en proceso de traducción ) 
El remasterizado a cargo de 2 usuarios conocidos en el universo Puppy como desarrolladores
de otras versiones importantes en español, nilsonmorales y josejp2424, uno de nacionalidad 
Salvadoreño y el otro Argentino, hicieron sociedad y crearon este remaster con algunas 
variantes del original detalladas más adelante.

### El perro Jíbaro

Esta especie pertenece a los mamíferos cimarrones, introducidos en Cuba durante
la colonización española. El Perro doméstico se convierte en jíbaros una vez que 
abandonan las casas y se internaron en los bosques.

Cuando se internaron en los bosques, modificaron sus caracteres y hábitos, y evolucionaron
en una nueva raza silvestre, acentuada en sus descendientes.

De ahi el codename para la version de Puppylinux Pupjibaro.

[FUENTE](http://www.ecured.cu/index.php/Perro_jíbaro)

### Repositorios de paquetes

[Repositorio Puppylinux precise oficial](http://distro.ibiblio.org/puppylinux/pet_packages-precise/)

[Repositorio Wuala](https://www.wuala.com/josejp2424/puppy-es/programas)

[Repositorio Dropbox](https://www.dropbox.com/sh/7cpbzfboqw8x167/qD9vt3Urzl)

### Caracteristicas 

- Arquitectura: i386

- Kernel: 3.2.48
                            
- Escritorio: Openbox, Lxpanel

- Administrador de archivos: Rox + opciones click derecho.

- Multilingue

- Requerimientos minimos: Pentium 4 256 ram (Para una mayor experiencia con 512 basta)

- Navegador por defecto: Chromium 25

- Gestor de paquetes: Ppm Puppy packages manager

- Editor de texto: Geany, Abiword

- Terminal: Roxterm

- Reproductor de Audio y video: Deadbeef, gnome-player

- Cliente de chat: Xchat

- Administrador de Impresión: Cups

### Otras caracteristicas

- Se agregaron librerias Python

- Gmail-notfy

- Telegram desde terminal ( se invoca con el comando tg )

- Nueva interfaz de apagado ( Gracias a KuLuSz )

- Selector de temas Xchat ( por josejp2424 )

- Notificador de bateria baja para Notebooks y Laptops ( Aviso al 10%, se apagará guardando
  los cambios al 5%)

- Notificador minimalista de eventos dunst ( por nilsonmorales )

- Youtube-dl + Youtube-dl-gui ( por josejp2424 )

- Fulldevx ( herramientas de desarrollo y compilación con más programas )

- Poedit, edit-SFS, edit-mo, ccgit, git, edit-initrd.gz, kernel sources incluidas 
en el Fulldevx

### Atajos del teclado

De forma sencilla Pupjibaro viene con algunos atajos del teclado útiles para el usuario

C = Ctrl

A = Alt

Ejemplo: C-A-g    tres teclas a la vez sin importar si es mayúscula o minúscula

C-A-g = geany     Editor de texto

C-A-h = htop      Ver procesos 

C-A-r = roxterm   La terminal

C-A-f = rox       El administrador de archivos 

El archivo ~/.config/openbox/rc.xml contiene el detalle completo de los atajos del teclado. 

### Compatibilidad

Pupjibaro al ser un remasterizado de Puppylinux retro precise puede ser compatible con todos
los paquetes de puppy precise y retro precise ademas de paquetes Debian Wheezy y Ubuntu Precise
Pangolin, como tambien derivados retro precise de Puppy.
Pupjibaro no cuenta con servidor de paquetes propio, los desarrolladores ofrecemos nuestros paquetes
atravez de sitios como wuala, dropbox, copy.com, yandex, ubuntuone entre otros.

### Sobre las actualizaciones

Las actualizaciones de Pupjibaro pueden agregarse de 2 formas:

Manual:: Pueden clonar este repositorio desde github y aplicar los cambios directamente en sus
directorios respectivos.

Jibaupdate:: Los desarrolladores ofrecerán pets de actualizaciones llamados jibaupdates con la 
estructura de todos los archivos contemplados en este proyecto, un jibaupdate se conformará de
la siguiente manera. 

Nombre-dia-mes-año-versión de Pupjibaro.   Ejemplo:: jibaupdate_26102014-1.0.3.pet 

Asi los usuarios sabrán la fecha que se lanzó la actualización y la versión de Pupjibaro.

Los jibaupdates no modificarán la apariencia por si ya fué modificada por el usuario, solamente

ajustes a programas o configuraciones que no funcionen bien, traducciones etc.

### Exención de responsabilidad

Los desarrolladores de Pupjibaro no pretendemos ser irrespetuosos de la filosofia GNU, si algunas aplicaciones
son consideradas no-libres o privativas, estan en su derecho de no usar la distro, nuestro enfoque primordial son
los usuarios con pocos conocimientos sobre linux para que puedan tener una experiencia mas amigable
al entorno linux, asi sucesivamente van conociendo acerca de las grandes ventajas y virtudes de usar Linux.

Pupjibaro hereda posibles bugs de la versión oficial retro precise, asi que cualquier problema favor leer antes en la 
sección de bugs del foro [Murga Linux](http://www.murga-linux.com/puppy/viewtopic.php?t=87712). nosotros por nuestra parte tambien nos mantendremos informados de los
mismos para ir incorporando los bugfixes que los desarrolladores expertos vayan haciendo.

Este repositorio-proyecto cuenta con una sección para reporte de fallos, comentarios y preguntas. 

woofwoof.

Este readme se irá editando con los pormenores de la iso.

[Galeria de imágenes de woofshahenzup](http://postimg.org/gallery/b4ohylc4/)

[Galeria de imágenes de josejp2424]()

[Comentarios](https://github.com/Woofshahenzup/Pupjibaro/issues?labels=Reportar+bugs%2CPreguntas%2CComentarios&page=1&state=open)

[Preguntas](https://github.com/Woofshahenzup/Pupjibaro/issues?labels=Reportar+bugs%2CComentarios%2CPreguntas&page=1&state=open)

[Reportar fallos y bugs](https://github.com/Woofshahenzup/Pupjibaro/issues?labels=Preguntas%2CComentarios&page=1&state=open)

