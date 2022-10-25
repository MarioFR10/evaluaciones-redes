
<div align="justify"> 

# Escuela de Ingeniería en Computación
# Redes IC-7602
## _Resumen #4-5 Cap 3.5, 4.6_
## Profesor: Nereo Campos
### Estudiante: Mario Fernández Robert - 2018163975
---------
# Verificación de protocolos (Cap 3.5)

La complejidad de los protocolos y los programas que los implementan ocasionan que se investiguen técnicas matemáticas formales con las cuales especificar y verificar dichos protocolos, a continuación algunos ejemplos.

## Modelos de máquinas de estado finito (Cap 3.5.1)

- Este modelo está basado en las máquinas de estado finito.

- La máquina de protocolo está siempre en un estado específico.

- Un estado importante es el inicial, desde este se pueden alcanzarse algunos, o quizá todos, los estados restantes.
- Es posible determinar los estados que son alcanzables y los que no mediante el análisis de asequibilidad.
- Mediante el análisis de asequibilidad se puede detectar una variedad de errores en la especificación del protocolo.

Una máquina de estados finitos está conformada por un cuádruple (S, M, I, T), donde:

- S: conjunto de estados en que pueden estar los procesos y el canal.
- M es el conjunto de tramas que pueden intercambiarse a través del canal.
- I es el conjunto de estados iniciales de los procesos.
- T es el conjunto de transiciones entre los estados.


Existen bloqueos irreversibles que es cuando:

- No hay transición hacia fuera del subconjunto.
- No hay transiciones en el subconjunto que causen un avance.

Es importante que el protocolo no tenga ningún bloqueo irreversible.

Un protocolo se considera incompleto cuando:

- La máquina no índica la siguiente acción con un estado de una trama.

Existen transiciones ajenas cuando:

- Una especificación del protocolo maneja un evento que no debe.

## Modelos de red de Petri (Cap 3.5.2)

La red de Petri se compone de cuatro elementos básicos:

- Lugares: representa un estado en el que puede estar parte del sistema.

- Transiciones: representadas con una barra horizontal o vertical, son habilitadas por los tokens.

- Arcos: pueden ser de salida o de entrada y pueden existir en cada transición.

- Tokens: representados con un punto grueso, existen en los lugares.

Las redes de Petri pueden representarse convenientemente en una forma algebraica semejante a una gramática. Cada transición contribuye con una regla a la gramática. Cada regla especifica lugares de entrada y salida de la transición.

# Bluetooth (Cap 4.6)

- Nace con la necesidad de la empresa L. M. Ericsson de conectar sus teléfonos móviles sin utilizar cables.

- Junto con IBM, Intel, Nokia y Toshiba formo un SIG.

- Esta idea se expandió rápidamente al área de las LANs inalámbricas.

## Arquitectura de Bluetooth (Cap 4.6.1)

- La unidad básica de un sistema de Bluetooth es una piconet.
- Un conjunto de piconets interconectadas se denomina scatternet.

- Una piconet consta de:
    - Un nodo maestro.
    - Siete nodos esclavos a una distancia de 10 metros.

- Una scatternet consta de:
    - Una o más piconets interconectadas a través de nodos puente.

- Los nodos pueden tener 2 estados intermedios: hold y sniff

## Aplicaciones de Bluetooth (Cap 4.6.2)

- Perfiles
    - Acceso genérico
    - Descubrimiento de servicios
    - Puerto serie
    - Intercambio genérico de objetos
    - Acceso a LAN
    - Acceso telefónico a redes
    - Fax
    - Telefonía inalámbrica
    - Intercom
    - Headset
    - Envío de objetos
    - Transferencia de archivos
    - Sincronización

## La pila de protocolos de Bluetooth (Cap 4.6.3)

- La capa inferior es la capa de radio física, se ocupa de la transmisión y la modulación de radio.
- La capa de banda base, se encarga de la manera en que el maestro controla las ranuras de tiempo y de que estas se agrupen en tramas.
- La capa middleware se encarga de ofrecer compatibilidad con las
redes 802.
- La capa superior es donde se ubican las aplicaciones y perfiles.

## La capa de radio de Bluetooth (Cap 4.6.4)

- Encargada de manejar la comunicación entre esclavos y maestro.
- El maestro decide la secuencia de saltos.
- La banda se divide en 79 canales de 1 MHz cada uno.

## La capa de banda base de Bluetooth (Cap 4.6.5)

- Cada trama se transmite por un canal lógico, llamado enlace.
- Existen 2 tipos de enlaces:
    - ACL (Asíncrono no Orientado a la Conexión)
    - SCO (Síncrono Orientado a la Conexión)

## La capa L2CAP de Bluetooth (Cap 4.6.6)

- Acepta paquetes provenientes de capas superiores y los transforma en tramas.
- Maneja la multiplexión y desmultiplexión de varias fuentes de paquetes.
- Se encarga de la calidad de los requerimientos de servicio, tanto al establecer los enlaces como durante la operación normal.

## Estructura de la trama de Bluetooth (Cap 4.6.7)

Esta estructura se compone de:

- Código de acceso: identifica al maestro (72 bits)
- Encabezado: Contiene los campos comunes de la subcapa MAC (54 bits)
- Datos: Contiene los datos de dicha trama (2744 bits)

</div>