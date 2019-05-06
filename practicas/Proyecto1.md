# Nombre de la materia
Sistemas Operativos

# Nombre de la actividad
Proyecto llamadas a sistema

# Competencia a la que impacta
Diseño de programas de software.

# Nombre del alumno
Hector Eduardo Martinez Alcantara

# Grupo
1

# Fecha 
1ero de abril de 2019
 	 
# Objetivo
Comprender el funcionamiento de las llamadas a sistema y cómo se implementan en xv6

# Conceptos aplicados
- Llamadas a sistema
- Procesos

# ¿Que aprendí durante el desarrollo del proyecto?
Aprendí que todo el tiempo se están utilizando las llamadas a sistema, y que hay variables de punteros que pueden llamarse desde cualquier lado como si fueran globales con una funcion que se llama argptr.

Se ejecutan en este orden:
exec -> 7
open -> 15
mknod -> 17
open -> 15
dup -> 10
dup -> 10
write -> 16
iwrite -> 16
nwrite -> 16
iwrite -> 16
twrite -> 16
:write -> 16
 write -> 16
swrite -> 16
twrite -> 16
awrite -> 16
rwrite -> 16
twrite -> 16
iwrite -> 16
nwrite -> 16
gwrite -> 16
 write -> 16
swrite -> 16

fork -> 1
wait -> 3
exec -> 7
open -> 15
close -> 21
write -> 16
$write -> 16
 read ->

- exec: parece que es el que ejecuta un proceso reemplazando al proceso anterior.
- mknod: crea un modo filesystem. 
- write: parece ser el que imprime en pantalla.
- open: abre un nuevo archivo y obtiene su descripcion de archivo.
- dup: copia la descripcion del archivo.
- fork: se usa para crear un nuevo proceso.
- wait: espera a que otro proceso se termine.
- close: cierra el file descriptor.
- read: lee datos en el buffer.

# ¿Cómo se relacionan estos nuevos conceptos con los vistos anteriormente?
Los procesos siguen utilizando interrupciones que son llamadas con memoria.

# Dirección electrónica con el código de la práctica.
https://github.com/Kenshex7/so-gp1/commit/fa74ab023681919007de0969c4985e09beff7b9c

