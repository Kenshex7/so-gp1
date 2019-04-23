# Objetivo
Hacer un spike sobre IPC: señales, fork/exec, memoria compartida y archivos mapeados a memoria.
# Herramientas
+ git.
+ gcc.


# Conceptos
+ IPC.
  + Comunicación entre procesos.
+ Señales:
  + Es un ipc, consta de un proceso emisor y un receptor. El emisor manda una señal y el receptor deja de hacer lo que está haciendo y ejecuta el código de la señal.
  + Existen varias señales, para listarlas puedo usar el comando kill -l
+ Memoria compatida.
  + Se crea un bloque de memoria, el bloque de memoria tiene un key.
  + Cualquier proceso con el key se puede conectar al bloque.
  + El bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.
+ Archivos mapeados a memoria
  + Es un bloque de memoria compartida que esta asociado a un archivo.
  + los cambios en un bloque se guardan automáticamente.
# ¿Qué aprendí?

# URL del commit
