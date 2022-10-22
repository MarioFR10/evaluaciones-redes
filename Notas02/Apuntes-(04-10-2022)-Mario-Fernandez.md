<div align="justify"> 

# Escuela de Ingeniería en Computación
# Redes IC-7602
## _Apuntes 04-10-2022_
## Profesor: Nereo Campos
### Estudiante: Mario Fernández Robert - 2018163975
---------

# Conceptos importantes

## Red domestica

ipconfig
la ipv4 es la LAN o numero de red

#red 

mascara de subred / 24 cantidad de bits que estaran en la mascara
/24 -> 255.255.255.0

DCHP = dinamic host configuration protocol

DNS
Default Gateway

Broadcast

lease un prestamo de ip para identificar una computadora dentro de una LAN

Route Tables -> donde se agregan las rutas y como sera el trafico de paquetes en la red


En nuestras casas el routeo es simple, por ejemplo el default gateway se conecta con el ISP que luego ira a Internet, que se encarga de hacer el trasiego de datos
(WAN) definido por el ISP

Internet es un ente descentralizado con sistemas autonomos interconectados, redes que por si mismas saben como mover paquetes entre ellas

Los ISPs reciben lo que se llama un Bloque de IPs publicas y esto es lo que permite tener intercomunicacion de rutas

Usualmente no se sale a internet con una direccion propia

Las IPs publicas se comparten mediante NAT para hacer la navegacion en internet

# 

# CIDR Block
10.0.0.0/20

es un conjunto de ips, tiene las mismas caracteristicas en numero de red y mascara de subred

se pueden definir subredes dentro de este bloque de redes, por ejemplo una red para la escuela de computacion

todas estas redes estan contenidas dentro del bloque de redes, por esta razon, cuando se hace el calculo de la mascara de subred, este tendra una mascara de 255.255.240.0, lo que va a causar es que un AND entre una ip de cualquiera de estas redes con 255.255.240.0, siempre va a entregar el mismo return es decir, 10.0.0.0, y con esto se garantiza que todas las subredes pertenecen al mismo CIDR Block, y con esto se pueden definir reglas de routeo mas complejas, por ejemplo, un router central con conexiones hacia las diferentes redes.

El router centrar se podria convertir en un punto de interconexion general, el router podria fungir tanto como envio de paquetes como firewall

una vez teniendo esta configuracion se puede empezar a jugar con esto es decir tener una configuracion 

Todo esto le logra con tablas de routeo como las de la clase pasada

normalmente el trafico dentro de una subred con CIDR block no se utiliza por routeo porque se garantiza que todas las estaciones tienen ips estaticas

Que es un CIDR block?
siempre utiliza rangos de ips privados, garantiza que no va a haber trafico de conflicto, se pueden utilizar subnets calculators

El primero es el subnet id y el ultimo el broadcast address

dentro de una red 10.0.0.0/24 se pueden tener 4 de 10.0.0.0/26


es posible hacer subdivisiones de redes, asi como subdivisiones de bloques en minecraft

se pueden tener reglas generales o reglas especificas

bloques privados, nos garantiza que ningun servidor en internet estara utilizando ninguno de los 3 rangos privados

#

# Como hace un router de europa para llegar a CR

Jerarquia de Bloques CIDR, o sea se hacen subnets para sacar por conexiones definido segun la reparticion de ips publicas


El internet se organiza en regiones geograficas se asignan ips a estas regiones y se envian a traves de un default gateway, o una regla

Existen multiples rutas

Routing a nivel macro, regiones geograficas y CIDR nets

no se puede tener un ip de europa en costa rica, ni un ip de costa rica en europa


mobile id es una forma en la que uno puede agarrar su ip de costa rica y a traves de tuneles se puede llevar la ip mochileando

no hay zonas reversas en el proyecto
resolver el IP basado en el nombre nada mas

en una LAN se hace acceso a internet

normalmente un browser tiene un cache

cuando es informacion que cambia muy poco, es informacion ttl, time to live

subsecuentes llamadas va a tener informacion cacheada

patron normal, conectarse a router y router hace conexion a internet 

proxy intercepta el trafico, agarra peticion 


cuando la informacion viaja al proxy el proxy tiene un cache similar al browser

la info que se envia al proxy 


no hacer un proxy explicito si no mas bien un proxy transparente, se deja que los usuarios piensen que los usuarios estan utilizando el router el trafico que me esta entrando al CHAIN de input, es http o https?, el router intercepta los datos

squid proxy iptables redirect

como saber que las conexiones estan sirviendo como se debe 

como probar conexiones 

asegurarse que a uno de los contenedores se le tienen instaladas herramientas de red, nettools de ubuntu

ejecutar route => el gateway por defecto nos deberia el router 1 de nuestras redes

traceroute, rastrear la conexion del internet

si el primer hop es nuestro router el primer 

10.0.0.0.100

ip addr el eth0 inet es un ip del rango que nos pidio el profe, para probar que la conexion este funcionando hacia el dhcp

nslookup www.google.com

nos deberia salir el ip que isaac configuro en la zona

verificar conexiones de router, dns y dhcp

cualquier comunicacion de lan01 a lan02 sale con el ip del router 1 y viaja al router 2

mañana a las 8:10 o el jueves entre 7 y 9 pm

udhcpc es un minicliente de dchp

los clientes son los unicos componentes que tienen que configurar ips dinamicamente

se le puede meter a todos los componentes si se quiere
de donde se saca el default gateway especifico?

el default gateway para los clientes es el router1

en el router 2 el default gateway del 2

</div>