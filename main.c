#include "lib/include.h"


int main(void)
{
	 I2C3_Init();
	 OLED_Init();
	 OLED_Clear();
    Configurar_PLL(_10MHZ);

    // variables for counting
    int count = 0;
    float dec = 0.0;
           

        while ( 1 ) {   

              /////////////////////
            // Strings
            ///////////////////
            
             OLED_YX( 0, 0 );
             //OLED_Write_String( "OLED SSD1306" );
             OLED_Write_String( "PRACTICA 8" );
                            Delay_ms(1000);

             OLED_YX(1, 0);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("EN EQUIPO");
                            Delay_ms(1000);

            OLED_YX(2, 0);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("GUS^2 :)");
                            Delay_ms(1000);

            OLED_YX(3, 0);
             OLED_Write_String ("¡SI SE PUEDE!");
                            Delay_ms(1000);
     
            /////////////////////
            // Integer Count
            ////////////////////

    
        
            /*for (count = 0; count <= 100; count++){
               OLED_YX(2, 0 );
               OLED_Write_String( "Count:" );
               OLED_YX(2, 8);
               // Función que convierte un valor en un string 
               char buffer[100];
               char *count2 = itoa(count, buffer,10);
               OLED_Write_String(count2);
               Delay_ms(1000);
            }
            */
            /* PARA QUE SE LIMPIE LA PANTALLA CADA 100 ms*/
            //OLED_Clear();
            //Delay_ms(100);       
          
   }
}
