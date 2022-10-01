# Escuela de Ingeniería en Computación
# Redes IC-7602
## Profesor: Nereo Campos
### Estudiante: Mario Fernández Robert - 2018163975

#

# Prueba corta #4

1. Explique el concepto de Time Division Multiplexing y Frequency Division
Multiplexing. (25 pts)

    - Time Division Multiplexing: Es un esquema de multiplexión en el cual los usuarios esperan su turno en "round-robin" y cada uno obtiene de forma periódica la banda durante un breve lapso de tiempo.

    - Frequency Division Multiplexing: Es un esquema de multiplexión en el cual el espectro se divide en bandas de frecuencia y cada usuario posee exclusivamente alguna de estas bandas.

2. Explique el concepto de colisión durante el proceso de asignación del canal,
comente las diferencias entre medios guiados y medios no guiados. (25 pts)

    - El problema de asignación del canal es uno muy serio, ya que se relaciona directamente con el ancho de banda de los usuarios, puesto que si se tiene un protocolo ineficiente dicho canal puede estar siento desperdiciado o, por el contrario, sobrecargado con peticiones de transmisión, una colisión se da cuando 2 o más estaciones quieren transmitir por un canal al mismo tiempo, como sucede en ALOHA, causando esto un alto índice de perdida y destrucción de paquetes, en medios no guiados como por ejemplo satélites, es mucho más común la perdida y destrucción de paquetes, lo que hace que los protocolos tengan que refinarse aún más para mejorar el porcentaje de tramas entregadas con éxito, en los medios guiados al ser más confiables pueden tener implementaciones menos robustas y más enfocadas en otros aspectos.

3. ¿Cómo funciona el algoritmo de asignación del canal Aloha y Aloha Ranurado?
Explique (20 pts)

    - ALOHA (Puro): Es un sistema "single-hop", en el cual un usuario puede transmitir un frame siempre que la estación tenga los datos a transmitir, es decir, las estaciones pueden requerir el canal en cualquier momento y enviar, su rendimiento máximo es de 18% de paquetes enviados con éxito, el resto se pierde en colisiones, cuando se produce una colisión la estación se duerme un tiempo aleatorio para evitar colisiones continuas entre estaciones.
    - ALOHA (Ranurado): Está basado en ALOHA puro con la restricción de que se crean diferentes ranuras de tiempo. La transmisión de datos no se permite hasta que haya acabado el slot de tiempo vigente, es decir que una estación tendrá que esperar a que termine un slot si decide que quiere transmitir cuando el tiempo de vigencia de dicho slot sigue activo, esta variación tiene un rendimiento máximo de 37% de tramas transmitidas con éxito.

4. ¿Cuáles son las diferencias entre Hub y Switch? ¿Por qué razón el Switch es mejor?

    - En un hub pueden ocurrir colisiones, mientras que un switch tiene el concepto de "awareness", es decir, sabe quien está conectado a él por lo que no tiene probabilidad de colisión (con un full dúplex).
    - El switch solamente envía las tramas a quien lo necesita y no realiza una difusión de los datos como el hub.
    - Los switches tienen el concepto de circuitos virtuales, los cuales pueden llegar a ser muy útiles.

    Los switches son mejores debido a dan la oportunidad de crear conexiones directas entre estaciones sin la necesidad de difusión, también el concepto de circuitos virtuales permite una expansión de la red local muchísimo más escalable que con un hub.

5. ¿Es posible transportar tramas Ethernet embebidas en imágenes PNG? Justifique su
respuesta. (30 pts)

    - Sí es posible, ya que como sucedía con los mensajes de texto el protocolo puede ser replicado mediante algún método de transmisión externo, y las tramas Ethernet podrían viajar entre los bits que componen la imagen sin necesidad de un método de codificación intermedio, sencillamente la imagen no tendría valor como imagen, sin embargo, si como método de empaquetamiento, cabe destacar que la metadata extra que se requiere para empaquetar un conjunto de bits en formato png sería un desperdicio, ya que esa información no sería valiosa para el Ethernet embebido, lo que lo hace una muy mala opción de empaquetamiento de tramas. 