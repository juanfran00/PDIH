# Seminario 2 Acceso a dispositivos de E/S en C

## Tarea 1: Realizar un programa en lenguaje C que llame a la función de cambio de modo de vídeo y comprobar su funcionamiento.

La función encargada de realizar el cambio de modo de vídeo:
// establece el modo de vídeo: 3-texto, 4-gráfico
```
void modovideo(BYTE modo){
 union REGS inregs, outregs;
 inregs.h.al = modo;
 inregs.h.ah = 0x00;
 int86(0x10, &inregs, &outregs);
}
```
Aquí podemos ver el cambio de modo de vídeo
![modo](https://github.com/juanfran00/PDIH/blob/main/S2/img/modo.png)




## Tarea 2: Realizar un programa en lenguaje C que llame a la función de interrupción correspondiente a la lectura de caracteres desde teclado. Ejecutarlo para leer pulsaciones de teclas y mostrarlas por pantalla usando otra función de interrupción
 
 En este caso pulsamos una tecla y nos devuelve la tecla pulsada aqui se puede ver la función:
 ```
 int mi_getchar(){
    union REGS inregs, outregs;
    int caracter;
    inregs.h.ah = 1;
    int86(0x21, &inregs, &outregs);
    caracter = outregs.h.al;
    return caracter;
}
void mi_putchar(char c){
    union REGS inregs, outregs;
    inregs.h.ah = 2;
    inregs.h.dl = c;
    int86(0x21, &inregs, &outregs);
}
```
Aquí se puede ver una imagen de la ejecución:
![lectura](https://github.com/juanfran00/PDIH/blob/main/S2/img/lectura.png)
