# Seminario 2 Acceso a dispositivos de E/S en C

## Tarea 1: Realizar un programa en lenguaje C que llame a la función de cambio de modo de vídeo y
comprobar su funcionamiento.
Nos vamos a dirigir a la página de [DOSbox](https://www.dosbox.com/download.php?main=1)
![dosbox_web](https://github.com/juanfran00/PDIH/blob/main/S1/img/dosbox_installer.png)

Descargamos el programa pinchando en descargas, se nos redirigirá a una página donde elijimos en que versión lo queremos descargar en mi caso Windows, seleccionamos y empezará la descarga del mismo.

![dosbox_downloads](https://github.com/juanfran00/PDIH/blob/main/S1/img/bosbox_downloads.png)

Una vez se ha descargado el archivo, iniciamos el instalador el cual es seguir unos sencillos pasos.

![dosbox_installer](https://github.com/juanfran00/PDIH/blob/main/S1/img/instalacion_completada.png)

### Ejecucion de un juego
Descomprimimos el archivo JUEGOS.zip y lo metemos dentro de la carpeta DOSBOX. En mi caso he lanzado el juego Tetris por lo cual ejecuto `TETRIS.EXE` y ya puedo jugar al juego.

![tetris_juego](https://github.com/juanfran00/PDIH/blob/main/S1/img/dosbox_juego.png)


## Tarea 2: Configurar el inicio de DOSBOX para que monte en su unidad C: el directorio donde se encuentra el entorno de programación Borland C (BC) que incluye las herramientas para compilar no sólo lenguaje C, sino también ensamblador. Añadir a la variable “PATH” de inicio el directorio “bin” donde se encuentra el ejecutable BC.EXE

En este caso lo he hecho de dos formas primero desde la aplicacion DOSbox por lo cual cada vez que me salgo se borra la configuración y una segunda desde el archivo de configuración para que se ejecute de forma automática cada vez que se inicia el progrma.
Montamos la carpeta que vamos a utlizar como raiz la carpets DOXBOX donde están el BC, los juegos y ejemos de ASM, camnbiamos el idioma del teclado al español .Para trabajar desde el volumen C, agregamos la ubicación de BC.EXE al variable path y luego nos movemos a dicho volumen. La nueva configuración del archivo sería la siguiente:

![dosbox_configuracion](https://github.com/juanfran00/PDIH/blob/main/S1/img/montar_unidad_c.png)

Para hacerlo de forma automatica hay que modificar el archivo de configuración y añadir al final del mismo las siguientes líneas:

![archivo_configuracion](https://github.com/juanfran00/PDIH/blob/main/S1/img/archivo_configuracion.png)

Para cambiar el tamaño de ventana de DOSbox hay que modificar el archivod e configuración con los siguientes valores:

![cambio_ventana](https://github.com/juanfran00/PDIH/blob/main/S1/img/cambiar_tamanio.png)

y quedaría tal que así:

![cambio_ventana_final](https://github.com/juanfran00/PDIH/blob/main/S1/img/cambio_tamanio.png)

## Tarea 3: Crear el ejemplo “Hola mundo” en ensamblador, compilarlo y comprobar su funcionamiento. A continuación, modificar ese ejemplo para incluir un bucle que muestre ese mensaje 7 veces.

Para simplificar esta tarea, utilizaremos los recursos proporcionados en el seminario, que incluyen el archivo "Hola Mundo" y el script que compila y vincula nuestros programas. De esta manera, solo necesitaremos ejecutar el script junto con el nombre del archivo deseado (sin la extensión) para realizar esta tarea.

Este programa opera mediante el almacenamiento de datos en registros separados, incluyendo un contador inicializado en 1. Al llegar a la etiqueta "bucle", se muestra un mensaje por pantalla y se incrementa el contador. Si el contador es distinto de 7, el programa salta a la etiqueta "bucle" y repite el proceso. Después de mostrar el mensaje el número de veces requerido, el programa continúa su ejecución y termina.

![salida](https://github.com/juanfran00/PDIH/blob/main/S1/img/ejecucion_hola.png)
