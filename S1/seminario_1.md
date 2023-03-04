# Seminario 1

## Tarea 1: Instalar el software DOSBox y ejecutar aplicaciones de MS-DOS (un juego)

Lo primero que debemos hacer es visitar la página de [DOSBox](https://www.dosbox.com/download.php?main=1) y descargar el programa. Pinchando en el botón verde, nos llevará a SourceForge, donde descargaremos el instalador rápidamente.

![dosbox_web](https://github.com/Megatorpon/PDIH/blob/main/S1/img/dosbox_web.png)

Una vez descargado nuestro archivo, lo abrimos y seguimos los sencillos pasos del instalador.

![dosbox_installer](https://github.com/Megatorpon/PDIH/blob/main/S1/img/dosbox_installer.png)

### Ejecutar un juego

Para ejecutar un juego, vamos a descomprimir el archivo juegos.zip que se nos ha proporcionado en la carpeta *DosboxGames* para tenerlo un poco más ordenado todo. Una vez hecho esto abrimos DOSBox y nos cambiamos a la carpeta donde se encuentra el ejecutable del juego VBALL. Finalmente lanzamos `VBOX.EXE` y ya podemos jugar al juego.

![play_game](https://github.com/Megatorpon/PDIH/blob/main/S1/img/play_game.png)

![game_open](https://github.com/Megatorpon/PDIH/blob/main/S1/img/game_open.png)

## Tarea 2: Configurar el inicio de DOSBox para que monte en la unidad C: el directorio donde se encuentra el entorno de programación de Borland C. Añadir a la variable “PATH” de inicio el directorio “bin” donde se encuentra el ejecutable BC.EXE

Cómo se nos indica en el seminario, a continuación debemos ir al archivo de configuración de Dosbox, que en nuestro caso se encuentra en la carpeta AppData, y añadir algunos parámetros al final del archivo para que se ejecuten de manera automática cada vez que se abre el programa. Montaremos la carpeta que utilizaremos como raíz, cambiaremos el idioma del teclado a español, añadimos el directorio donde se encuentra **BC.EXE** a la variable path y, finalmente, nos cambiamos al volumen C para trabajar desde este. El archivo quedaría de la siguiente manera:

![dosbox_config](https://github.com/juanfran00/PDIH/blob/main/S1/img/dosbox_config.png)


## Tarea 3: Crear el ejemplo “Hola mundo” en ensamblador, compilarlo y comprobar su funcionamiento. A continuación incluir un bucle para mostrar el mensaje 7 veces.

Para facilitarnos esta parte, usaremos lo que se nos proporciona en el seminario, que son tanto el contenido del archivo de Hola Mundo como el contenido del script que servirá para compilar y enlazar los programas que creemos, de forma que para realizar esto último solo tengamos que lanzar el script junto al nombre del archivo deseado (solo el nombre, sin extensión).

**hello.asm**
![helloWorldBase](https://github.com/Megatorpon/PDIH/blob/main/S1/img/helloWorldBase.png)

**c.bat**
![script](https://github.com/Megatorpon/PDIH/blob/main/S1/img/script.png)

Lo siguiente que debemos hacer es modificar el archivo de hello.asm para que muestre el mensaje de "Hola Mundo" 7 veces en un bucle. El archivo quedará de la siguiente manera:

![helloWorldBucle](https://github.com/Megatorpon/PDIH/blob/main/S1/img/helloWorldBucle.png)

El funcionamiento de este programa se resume en que guardan datos en diferentes registros, incluyendo un contador que comienza en 1. Cuando el programa llega a la etiqueta "bucle", se muestra el mensaje por pantalla y se incrementa el contador. Si el contador es distinto de 7, se salta a etiqueta "bucle" y se vuelve a ejecutar lo que pertenece a esta. Una vez mostrado el mensaje las veces requeridas, el programa sigue su ejecución y termina.

![salida](https://github.com/Megatorpon/PDIH/blob/main/S1/img/salida.png)
