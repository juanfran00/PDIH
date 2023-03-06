#include <dos.h>

#define BYTE unsigned char

BYTE MODOTEXTO = 3;
BYTE MODOGRAFICO = 4;
// hace una pausa

void pausa(){
 union REGS inregs, outregs;
 inregs.h.ah = 0x00;
 int86(0x16, &inregs, &outregs);
}

// establece el modo de vídeo: 3-texto, 4-gráfico
void modovideo(BYTE modo){
 union REGS inregs, outregs;
 inregs.h.al = modo;
 inregs.h.ah = 0x00;
 int86(0x10, &inregs, &outregs);
}



/*#################################################################################*/
int main(){

 modovideo(MODOGRAFICO); //gráfico
   printf("\nModo gráfico");
 pausa();
 modovideo(MODOTEXTO); //texto
 printf("\nModo texto");
 return 0;
}
