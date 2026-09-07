#include <iostream>

using namespace std;

int main ()
{   
    // Placas Madre, Procesadores y Módulos.

    
    int precio_placa_madre,precio_procesador,precio_modulo;

    int cantidad_placa_madre,cantidad_procesador,cantidad_modulo;
    
    
    //PRECIO

    cout<<"                                           "<<endl;
    cout<<"                                           "<<endl;
    cout<<"PRECIO UNITARIO DE LOS COMPONENTES "<<endl;
    cout<<"-----------------------------------"<<endl;

    cout<<"ingrese el precio unitario de la placa madre "<<endl;
    cin>>precio_placa_madre;

    cout<<"ingrese el precio unitario del processador "<<endl;
    cin>>precio_procesador;

    cout<<"ingrese el precio unitario de los modulos de memoria Ram "<<endl;
    cin>>precio_modulo;
    


    //CANTIDAD

    cout<<"                                           "<<endl;
    cout<<"                                           "<<endl;
    cout<<"CANTIDAD REQUERIDA POR LOS COMPONENTES "<<endl;
    cout<<"--------------------------------------"<<endl;


     cout<<"ingrese la cantidad requerida por las placas madre "<<endl;
    cin>>cantidad_placa_madre;

    cout<<"ingrese la cantidad requerida por procesadores  "<<endl;
    cin>>cantidad_procesador;

    cout<<"ingrese la cantidad requerida por modulos de memorias RAM "<<endl;
    cin>>cantidad_modulo;


    int sub_total_bruto,cantidad_total;

    float post_descuento,post_IVA,post_IIBB;

    float descuento,IVA,IIBB;
    

    sub_total_bruto =(precio_placa_madre*cantidad_placa_madre)+(precio_procesador*cantidad_procesador)+(precio_modulo*cantidad_modulo);
    
    cantidad_total=cantidad_placa_madre+cantidad_procesador+cantidad_modulo;
   

    if(cantidad_total>=10)
    {
       descuento=sub_total_bruto*0.05;
       post_descuento=sub_total_bruto-descuento;
      
    } else
       {
        descuento=0;
        post_descuento=0;
       }
    
    IVA=post_descuento*0.21;
    post_IVA=post_descuento-IVA;
 
    IIBB=post_IVA*0.025;
    post_IIBB=post_IVA-IIBB;

    float total;
    
    total=post_IIBB;

    //Salida: Mostrar un comprobante detallado con Subtotal Bruto, Descuento Aplicado, Base Imponible, IVA, Percepción IIBB y Total Final a Pagar.

    cout<<"---------------------------------------------------------"<<endl;
    cout<<"----------COMPROBANTE DETALLADO DE LA COMPRA----------"<<endl;

    cout<<"                                                                             "<<endl;
    cout<<"SUB_TOTAL_BRUTO: "<< sub_total_bruto <<endl;
    cout<<"DESCUENTO_APLICADO: "<< descuento <<endl;
    cout<<"BASE IMPONIBLE ES: "<< post_descuento<<endl;
    cout<<"IVA: "<< <<endl;



    return 0;
}
