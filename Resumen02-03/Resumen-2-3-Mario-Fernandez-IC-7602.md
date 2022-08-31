
<div align="justify"> 

# Escuela de Ingeniería en Computación
# Redes IC-7602
## _Resumen #2-3 Cap 2.5.1, 2.5.3, 2.5.4, 2.7_
## Profesor: Nereo Campos
### Estudiante: Mario Fernández Robert - 2018163975
---------
# Estructura de los sistemas telefónicos (Cap 2.5.1)


- Bell telephone company: fundada para darle solución al problema de interconexión que generaba el tener que conectar 1 a 1 todos los teléfonos
- La solución planteada por la Bell telephone company era un conmutador centralizado operado manualmente por personas.
- El modelo escaló hasta tener una jerarquía de 5 niveles.
- Este modelo sobrevivió hasta más de 100 años.

## AT&T
- Tenía muchísimo cobre tanto como un 80% de su capital
- Mantuvo el monopolio de las conexiones telefónicas durante muchos años

## Transmisión digital
- Por encima de la transmisión analógica debido a que no es necesario recrear una onda analógica exactamente basta con poder diferenciar un 0 de un 1.

## Componentes del sistema telefónico
- Circuitos locales
- Troncales
- Oficinas de conmutación

-------------------
# El circuito local: módems, ADSL e inalámbrico (Cap 2.5.3)

## Modems
El modem es el encargado de realizar la conversión de señales analógicas a digitales, además si en el otro extremo hay una computadora con un modem es necesario hacer una conversión inversa.
Los medios causan que las señales transmitidas se deformen y no sean exactamente iguales a las enviadas.

## Tres problemas principales de las líneas de transmisión
- Atenuación
- Distorsión
- Ruido

## Tipos de modulación
- Modulación de amplitud
- Modulación por desplazamiento de frecuencia
- Modulación de fase

## Definiciones importantes
- Ancho de banda: rango de frecuencias que atraviesa al medio con atenuación mínima
- Tasa de baudios: cantidad de muestras por segundo que se realizan, cada muestra contiene un pedazo de información
- Técnica de modulación: determina la cantidad de bits por símbolo
- Tasa de bits: cantidad de información que se envía por el canal y es igual a la cantidad de símbolos por segundo por la cantidad de bits por símbolo

## Límites de ancho de banda
- Nyquist para canales sin ruido
- Shannon para canales con ruido

## ADSL
Puede ofrecer velocidades de hasta 50 Mbps, modulando cada uno de sus canales por separado


### ADSL vs. cable
- Ambas utilizan fibra óptica en la red dorsal
- El cable utiliza cable coaxial, mientras que ADSL, cable de par trenzado
- Los proveedores de ADSL indican el ancho de banda y son bastante precisos, los proveedores de cable no indican este dato.
- La eficiencia del servicio por cable está directamente ligada a la cantidad de usuarios que haya en ese momento
- Pocos negocios cuentan con la infraestructura de cable debido a que inicio como un servicio de distribución de televisión

Tanto ADSL como cable tienen sus pros y sus contras, por lo tanto, queda a criterio del usuario determinar cuál satisface de mejor manera sus necesidades


## Circuitos locales inalámbricos 
WLL (Circuito Local Inalámbrico) es una alternativa de bajo costo al tradicional circuito local con par trenzado.

Asigna anchos de banda de manera asimétrica similar a ADSL y LMDS, dando prioridad al canal descendente.

Desafortunadamente, es poco probable que se popularicen debido a que no existen estándares que motiven a los fabricantes a producir equipo y que aseguren a los nuevos usuarios poder migrar a esta tecnología sin la necesidad de comprar nuevo equipo.

---------

# Troncales y multiplexión (Cap 2.5.4)

Para reducir costos y poder brindar mejores servicios a un mayor beneficio, las compañías telefónicas han desarrollado esquemas para multiplexar conversaciones y así poder usar menos troncales físicas.

## Categorías principales de esquemas de multiplexión

- FDM: el espectro de frecuencia se divide en bandas de frecuencia y cada usuario tiene una única banda 
- TDM: los usuarios esperan su turno y cada uno obtiene de forma periódica toda la banda

## Multiplexión por división de frecuencia (FDM)
- Un estándar muy difundido es el de 12 canales a 4000 Hz multiplexados dentro de la banda de 60 a 108 kHz
- Se pueden crear grupos, supergrupos y grupo maestro

## Multiplexión por división de longitud de onda (WDM)
- Se utiliza en canales de fibra óptica
- Es básicamente multiplexión por división de frecuencias a frecuencias muy altas

## Multiplexión por división de tiempo (TDM)
- Se puede manejar por completo mediante dispositivos digitales
- Utiliza la técnica llamada PCM
---------

# Televisión por cable (Cap 2.7)

## Televisión por antena comunal
- Provoco que las grandes compañías comenzaran a comprar sistemas de cables existentes e instalaran más cable para adquirir nuevos clientes
- Las compañías de cable empezaron a conectar ciudades por medio de cable para conectarlas a un mismo sistema

## Internet a través de cable
- Existe algo llamado HFC (Red Híbrida de Fibra Óptica y Cable Coaxial)
- Los cables típicos tienen de 500 a 2000 casas

La televisión por cable ha evolucionado hacia una red híbrida HFC, lo cual genera mucho dinamismo sin incurrir en los gastos catastróficos que sería cambiar toda la infraestructura coaxial y obteniendo el mejor rendimiento de la fibra óptica por lo que se ha convertido en una alternativa muy viable.

</div>