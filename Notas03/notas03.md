
```
ip route add default via 10.0.0.10
```

traceroute ip_destino

va a dar la ruta que esta agarrando para ir al ip_destino



primero se levantan los routers
luego se levanta el DNS
luego se levanta el dhcp
cuando estos estan levantados, se levantan los clientes 
los clientes son los unicos que utilizan ips dinamicas
estos se la piden al dhcp

squid proxy cache escucha en 3128

