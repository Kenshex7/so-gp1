# Objetivo
Hacer un spike sobre hilos, semaforos y locks
# Herramientas
+ git.
+ gcc.

# Conceptos
+ Hilos:
  + Es un proceso ligero que solo consta de un stack y el código y el heap los comparte con el proceso principal.
  + Pueden ejecutar funciones diferentes.
+ Semáforos:
  + Es una variable global
  + Soporta dos operaciones.
    + Incrementar(sem_post) siempre incrementa en uno.
    + Decrementar(sem_wait) si el valor del semáforo es mayor que 0 decrementa, si es igual a cero se suspende.
+ Lock:
  + Es una variable global.
  + Soporta dos operaciones.
    + lock (bloqueo) adquirie el lock. Si el lock ya está tomado, el hilo/proceso se suspende.
    + unlock (desbloquea) libera el lock.
  Secciones críticas
# ¿Qué aprendí?

# URL del commit

