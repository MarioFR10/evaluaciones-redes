# Escuela de Ingeniería en Computación
# Redes IC-7602
## Profesor: Nereo Campos
### Estudiante: Mario Fernández Robert - 2018163975

#

# Examen

Pregunta 1 (40 pts)

En primera instancia, para la capa física se decide descartar ciertas opciones por las siguientes razones:

- Cobre, Fibra Óptica: En el tiempo especificado (2 años) y tomando en cuenta la geografía del país, es improbable poder establecer una conexión total debido a las dificultades que se tendrían que afrontar; Además, para aprovechar los recursos ya existentes, se pueden utilizar los satélites desplegados y utilizar el token ring para establecer una conexión Estación-Solaria.

Como estándar se propone ALOHA ranurado, esto por ser el más eficiente de los estándares estudiados, además de acoplarse muy bien con el resto de la arquitectura de la propuesta.

Como estructura jerárquica se propone seguir la existente en el antiguo país Costa Rica, esto es, seguir la estructura jerárquica Cantón->Distrito->Provincia->País, cabe destacar, que en caso de expandir la colonización a otros territorios, se puede modificar esta estructura jerárquica y acoplarse a la que antiguamente existía en el país gemelo.

Con todo esto tenemos lo siguiente: 

- En el caso de enviar paquetes, antenas de satelitales colocadas según la colonización del territorio, avance, primeramente en cantones, que envían sus señales a una antena central que se ubica por distrito, esta se encarga de enviar la señal a la respectiva antena central de Provincia y finalmente esta envía la señal a la antena central del País; así pues, tenemos una estructura jerárquica para la distribución de los paquetes.

- En el caso de recibir paquetes provenientes de la estación espacial, primero la recibe la antena al nivel de país, la cual distribuye el paquete a la respectiva antena nivel Provincia, esta se encarga de enviarla al respectivo distrito y finalmente se envía al respectivo cantón.

- Un estándar bien conocido como lo es el ALOHA ranurado, del cual ya se tienen estudios de su eficiencia, y puede ser implementado fácilmente.

- Un satélite espacial encargado de establecer conexión con el planeta solaria y muchos satélites que forman un token ring, enviando el mensaje entre ellos hasta que la estación designada encuentre el mensaje.

- Una capa física implementada para garantizar comunicación entre los territorios de Namiapí, priorizando comunicación sobre velocidad.


Pregunta 2 (30 pts)

2.1 ¿Por qué razón se presentó este incidente?

Lo más probable es que por la cercanía con el Aeropuerto y el uso de los walkie-talkies (alejarse hasta que la transmisión entre ellos se cortara), los niños captaron transmisiones en frecuencias que estaban siendo utilizadas por los operadores del Aeropuerto, además se le suma el hecho de que la torre de control del Aeropuerto muy probablemente no estaba siendo regulada por ningún uso de frecuencias y enviaba señales en un espectro muy amplio por lo que los walkie-talkies fueron capaces de interceptar las señales dispersadas.

-----

2.2 ¿Por qué es necesaria la regulación de uso de frecuencias?

Porque las frecuencias pueden ser interceptadas por cualquier persona, incluso un niño accidentalmente, y si la información que viaja es de alta importancia o privada, puede llegar a ser muy problemático.

-----

2.3 ¿Por qué se debe certificar los dispositivos y limitar su frecuencia de transmisión?

Cada dispositivo debería trabajar o funcionar en una frecuencia establecida y certificarse que dicho dispositivo funciona de manera correcta, ya que si esto no existiera pueden darse casos como el de los niños o incluso existir dispositivos que opaquen o destruyan las señales de otros usuarios.

-----

2.4 ¿Por qué la privacidad va de la mano con las redes? En especial en medios inalámbricos.

Ya que los medios inalámbricos utilizan el aire para la distribución de paquetes, es muy necesario que los paquetes que viajen vayan encriptados de alguna manera, pues pueden ser interceptados y utilizados de manera maliciosa.

-----

2.5 Suponiendo que se encuentran en el año 1993, ¿Qué solución darían para evitar este problema?

Se puede trabajar en un rango específico de frecuencia, y no uno tan amplio como el de la torre de control, esto garantizaría que en esas frecuencias, no se interceptaran mensajes inesperados; sin embargo, no solucionaría el problema de que alguien malicioso pueda captar mensajes en dichas frecuencias o realizar un ataque, por lo que se podría implementar un tipo de "cifrado", o intercambio de mensajes en código, para que la información tenga al menos una capa extra de seguridad, algo así como los códigos que utiliza la policía.

Pregunta 3 (15 pts)

3.1 ¿Por qué razón overprovisioning de hardware no es una herramienta efectiva para lidiar con la congestión? (10 pts)

Tirarle hardware al problema rara vez es la solución a este tipo de problemas en general, específicamente con la congestión a nivel de capa de red, esto es aún menos eficiente, pues lo único que se conseguiría sería una inversión inmensa en hardware que sigue siendo susceptible a congestiones dependiendo de la cantidad de paquetes que se envíen, lo mejor es implementar estándares y algoritmos que se encarguen de manejar la congestión y no desaprovechar el ancho de banda.

-----

3.2 ¿Cómo el uso de Inteligencia Artificial (IA) y el análisis de tráfico de capa de red, puede ayudar a tomar decisiones más adecuadas para asegurar un QoS en la red, será posible implementar prioridad de tráfico basado en IA? (5 pts)

Las inteligencias artificiales están en su auge, y tienen definitivamente muchos usos y aplicaciones, a nivel personal no creo que veamos esto implementado pronto, ya a este punto tendría que haber ocurrido de ser viable; sin embargo, como ejercicio académico es interesante evaluar la posibilidad de una IA cumpliendo un rol de distribuidor de tráfico, además, debido a que las IA se entrenan mediante altos flujos de datos, es probable que se pueda entrenar una IA eficientemente con la cantidad de datos que existen y entonces identificar que rutas se congestionan más que otras en qué momentos.

-----

Pregunta 4 (15 pts)

4.1 Explique en detalle, ¿Cómo afectan los saltos entre routers el round-trip time de un paquete entre dos puntos de Internet?, ¿Cómo afecta el MTU este tiempo y como nos beneficia conocer el mínimo MTU? Discuta las implicaciones de clientes, servidores y dispositivos de red intermedios (routers) que participan en la comunicación. (10 pts)

Los saltos entre routers representan la cantidad de veces que un paquete "salta" entre routers hasta llegar a un servidor o cliente deseado, cada vez que un paquete "salta" es un tiempo extra que se le añade a la transmisión de dicho paquete por lo que el round-trip time se ve directamente afectado entre más saltos existan; Por otro lado, el MTU afecta el round-trip time debido a que si un paquete tiene un tamaño muy grande el mismo tendrá que ser divido en paquetes más pequeños y esto le sumaría tiempo de procesamiento, con esto podemos concluir que enviar los paquetes con un buen MTU resultaría en un round-trip más rápido.

-----

4.2 ¿Cómo el uso de caches regionales (cerca del usuario) pueden ayudar a reducir la cantidad de saltos, reducir el round-trip time y hacer un uso eficiente del ancho de banda? Discuta las implicaciones para clientes, servidores y dispositivos de red intermedios. (5 pts)

Los cachés siempre ofrecen soluciones interesantes a los problemas, en este caso hacer uso de un caché puede solucionar el problema de calcular la misma ruta muchas veces, es entonces, como una ruta puede ser calculada la primera vez que se realiza una petición, almacenada en caché y reutilizada desde caché cuando se vuelva a realizar la misma petición, que implementar caches regionales pueden reducir round-trip time y saltos.