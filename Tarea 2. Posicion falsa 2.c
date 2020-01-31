/*Alumno: Emiliano Sanchez Olivares
Grupo: 2SV2
Curso: Metodos Numericos
Tarea: 2.2

*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

float x1, x2, error;
float prueba1,prueba2;
float raiz,e_test=0, f_xu, f_xL, xr, f_xr;
float f_x(float x)
{
    return (pow(x,3)+4*(pow(x,2))-10);
}
float Biseccion(float x_L, float x_u, float e)
{


do
{

//operaciones
f_xL=f_x(x_L);
f_xu=f_x(x_u);
xr=x_u-f_xu*((x_u-x_L)/(f_xu-f_xL));
f_xr=f_x(xr);
//calculo del eror

prueba1=f_xL*f_xr;
prueba2=f_xu*f_xr;



e_test=fabs((xr-x_L)/xr);
    if(prueba1>0&&prueba2<0)
        {
            x_L=xr;
        }
    if(prueba1<0&&prueba2>0)
        {
            x_u=xr;
        }


}
while(e_test>e);
raiz=xr;

return raiz;
}
int main()
{
printf("\n\tPrograma que calcula la raiz de la funcion    x^3 + 4x^2 -10 por el metodo de biseccion  ");
printf("Digita el intervalo en el qeu sera evaluada la funcion");
printf("\nDe: ");
scanf("%f",&x1);
printf("\nA: ");
scanf("%f",&x2);
printf("\nDigita el error permitido: ");
scanf("%f",&error);

Biseccion(x1,x2,error);

printf("\nEL valor de la raiz es aproximadamente:%f",raiz);



getch();
return 0;

}

