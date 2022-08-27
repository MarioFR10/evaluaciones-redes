# Escuela de Ingeniería en Computación
# Redes IC-7602
## _Resumen #1 Cap 1.5_
## Profesor: Nereo Campos
### Estudiante: Mario Fernandez Robert - 2018163975
---------
# Internet

- Consiste en un conjunto de redes y protocolos
- Las ideas de Baran fueron descartadas al inicio por AT&T
- Las ideas de Baran fueron rescatadas y citadas por el National Physical Laboratory

### ARPANET y DoD
El sistema del NPL conectaba computadoras en el campus de dicha institución y este hecho fue suficiente para que Larry Roberts se decidiera a construir ARPANET.
Un IMP es un procesador de mensajes de interfaz y este formaria una subred de datagramas, de esta manera los mensajes se podrian enrrutar por rutas alternas en caso de destrucción.

- IMP y host en la misma localización
- Un host podria enviar mensajes de 8063 bits a su IMP
- El IMP fragmentaria los mensajes en paquetes de máximo 1008 bits

La empresa seleccionada para la implementacion de ARPANET, BBN desarrollo diversos protocolos, tales como:
- Host a IMP
- Host a Host

Sin embargo esto no le gustó a Roberts ya que los hosts tambien requerian de software, por lo que convocó a un grupo de estudiantes para que le ayudaran a solucionar el problema y estos desarrollaron una red experimental con cuatro nodos inicales:
- UCLA
- UCSB
- SRI
- Universidad de Utah

Protocolos que nacieron para facilitar la comunicación interredes:
- DNS
- TCP/IP

Estos fueron adoptados rapidamente y adquirieron popularidad ya que beneficiaban a los interesados de maneras extraordinarias.

### NSFNET y NFS
Al ver la exclusividad de ARPANET y su obligación de mantener un contrato con DoD NSF decidío desarrollar su propia solución que esperaban sucediera ARPANET, implementando desde un inicio TCP/IP como sus protocolos de transmición, de esta manera se creó la primera WAN TCP/IP.

### ANS... MERIT, MCI e IBM 
ANS fue una organizacion no lucrativa mediante la cual el financiamiento de las redes en Estados Unidos paso de las manos de las instituciones publicas a las instituciones privadas, EuropaNET y EBONE fueron las implementaciones basadas en ARPANET y TCP/IP que se implementaron en Europa.

---------

## Uso del Internet

Tradicionalmente existían 4 aplicaciones principales de Internet:

- Correo electrónico
- Noticias
- Inicio remoto de sesión 
- Transferencia de archivos

### WWW (World Wide Web) e ISPs

Las primeras implementaciones de los ISPs involucraban las redes telefonicas como metodos de transporte de las señales emitidas por el modem que se encontraba dentro del computador, sim embargo esta idea está actualmente en deshuso ya que imposibilitaba el uso de ambos servicios al mismo tiempo.

#### Redes orientadas a la conexión y no orientadas a la conexión

A los seguidores de ARPANET/Internet les desagradaba la idea de las redes orientadas a la conexión ya que iban en contra de los objetivos iniciales de ARPANET como la transmición de datos ininterrumpida en caso de algun bombardeo a algun IMP.
Sin embargo las empresas de telefonía impulsaban esta idea debido a que tenia como mejoras al servicio:
- Mayor calidad
- Un metodo de facturación más sencillo

Por lo tanto se implementaron diversas redes orientadas a la conexión, tales como:
- X.25 y Frame Relay
- Modo de transferencia asíncrona (ATM)

ATM era mucho mejor que OSI por lo que la comunidad no tardó en adoptarlo y popularizarlo.

----------

## Ethernet

Ehernet es la LAN más popular, siendo la Ethernet Xerox la más exitosa y a partir de la cual DEC, Intel y Xerox, diseñaron un estandar para una Ethernet de 10mbps.

Existieron implementaciones que utilizaban _tokens_ para evitar la colision en la transmición de datos.

## LANs inalámbricas: 802.11
El IEEE se encargó de estandarizar las LANs inalámbricas ya que se puso de moda el sueño de poder conectarse al Internet desde cualquier lugar.
Se toparon con una serie de problema tales como:
- Encontrar una banda de frecuencia adecuada
- El rango finito de las señales de radio
- Privacidad de los usuarios
- Tomar en cuenta las baterias de los equipos
- Preocupaciones eticas de la transmicion de ondas electromagneticas a gran escala
