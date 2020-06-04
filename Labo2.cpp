#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>
#include <dos.h>
#include<stdio.h>

using namespace std;
 void gotoxy(int x,int y){  
      HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);;  
         
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 
 }

	int main(){
		system("color E1");
		int a,num,nombreproducto,codigo,validacion,decision,NIT[5],num2,nit,facturas,nombrefact,productos,cantidade,venta;
		validacion=0;
		string nombre[5],matriz2[100][100],cliente;
		float descuento;
		double matriz1[100][100],cantidades[10],subc=0,iva,subtotal=0,total;
		while(validacion==0){
       system("cls");
		gotoxy(25,3);
		cout<<"1.Ingreso de productos"<<endl;
		gotoxy(25,4);
		cout<<"2.Consulta de productos"<<endl;
		gotoxy(25,5);
		cout<<"3.Ingreso de clientes"<<endl;
		gotoxy(25,6);
		cout<<"4.Consultas clientes"<<endl;
		gotoxy(25,7);
		cout<<"5.Facturacion"<<endl;
		gotoxy(25,8);
		cout<<"6.Salida"<<endl;
		gotoxy(25,10);
		cout<<"Opcion a elegir? ",cin>>a;
		

		switch(a){
		case 1:
			
			system("cls");
			cout<<"Cuantos productos desea ingresar? Maximo 5 ",cin>>num;
			if (num>5) {
				system("cls");
				cout<<"Valor incorrecto"<<endl;
				system("pause");
			}else{
			gotoxy(5,1);
			cout<<"Nombre producto"<<endl;
			gotoxy(25,1);
			cout<<"Codigo producto"<<endl;
			gotoxy(45,1);
			cout<<"Precio costo"<<endl;
			gotoxy(65,1);
			cout<<"Precio venta"<<endl;
			gotoxy(85,1);
			cout<<"Cantidad"<<endl;
			gotoxy(5,2);
			cout<<"________________________________________________________________________________________"<<endl;
			for(int i=0;i<num;++i){
				gotoxy(5,3+i);
				cin>>nombre[i];
		          for(int a=0;a<4;++a){
					  gotoxy(25+(20*a),3+i);
					  cin>>matriz1[i][a];
					  //cuando filas = 1 ,compare los valores del codigo que metimos anteriormente y el que estamos ingresando
					  if (i==1){
						  do{
						  if (matriz1[1][0]==matriz1[0][0]){
							  gotoxy(25+(20*a),3+i);
							  cout<<"Sus codigos son iguales"<<endl;
							  gotoxy(25+(20*a),3+i);
							  cout<<"                       "<<endl;
							  gotoxy(25+(20*a),3+i);
							  cin>>matriz1[i][a];
						 }
						  } while(matriz1[1][0]==matriz1[0][0]);
					  

					}
						 if (i==2){
						  do{
						  if (matriz1[2][0]==matriz1[0][0] || matriz1[2][0]==matriz1[1][0]){
							  gotoxy(25+(20*a),3+i);
							  cout<<"Sus codigos son iguales"<<endl;
							  gotoxy(25+(20*a),3+i);
							  cout<<"                       "<<endl;
							  gotoxy(25+(20*a),3+i);
							  cin>>matriz1[i][a];
						 }
						  } while(matriz1[2][0]==matriz1[0][0] || matriz1[2][0]==matriz1[1][0]);
						 }

						  if (i==3){
						  do{
						  if (matriz1[3][0]==matriz1[0][0] || matriz1[3][0]==matriz1[1][0] || matriz1[3][0]==matriz1[2][0] ){
							  gotoxy(25+(20*a),3+i);
							  cout<<"Sus codigos son iguales"<<endl;
							  gotoxy(25+(20*a),3+i);
							  cout<<"                       "<<endl;
							  gotoxy(25+(20*a),3+i);
							  cin>>matriz1[i][a];
						 }
						  } while(matriz1[3][0]==matriz1[0][0] || matriz1[3][0]==matriz1[1][0] || matriz1[3][0]==matriz1[2][0]);
						 }
						 if (i==4){
						  do{
						  if (matriz1[4][0]==matriz1[0][0] || matriz1[4][0]==matriz1[1][0] || matriz1[4][0]==matriz1[2][0] || matriz1[4][0]==matriz1[3][0] ){
							  gotoxy(25+(20*a),3+i);
							  cout<<"Sus codigos son iguales"<<endl;
							  gotoxy(25+(20*a),3+i);
							  cout<<"                       "<<endl;
							  gotoxy(25+(20*a),3+i);
							  cin>>matriz1[i][a];
						 }
						  } while(matriz1[4][0]==matriz1[0][0] || matriz1[4][0]==matriz1[1][0] || matriz1[4][0]==matriz1[2][0] || matriz1[4][0]==matriz1[3][0]);
						 }
			}
			}
			
			cout<<"Desea volver al menu o cerrar el prgrama? 1.Menu 2.Cerrar  ",cin>>decision;
			if(decision==1){
				validacion=0;
			}else{
				validacion=1;
			}
		
			break;
			


		case 2:		   
			validacion=1;
			while(validacion==1){
			system("cls");			
			gotoxy(25,4);
			cout<<"    INFOPRADO"<<endl;
			gotoxy(25,5);
			cout<<"    28 Calle 7-58 Zona 11"<<endl;
			gotoxy(25,6);
			cout<<"    Tel. 2442 3411"<<endl;
			gotoxy(25,7);
			cout<<"    Consulta Productos"<<endl;
			gotoxy(5,8);
			cout<<"Codigo Producto.Si la informacion no aparece,su codigo NO EXISTE:  ",cin>>codigo;
			gotoxy(5,9);
			cout<<"Nombre Producto: "<<endl;
			gotoxy(5,10);
			cout<<"Precio costo: "<<endl;
			gotoxy(5,11);
			cout<<"Precio venta: "<<endl;
			gotoxy(5,12);
			cout<<"Ganancia por unidad"<<endl;
			gotoxy(1,13);
			cout<<"Existencias : "<<endl;
			gotoxy(30,13);
			cout<<"Ganancia total: "<<endl;
			//Luego
			for(int i=0;i<num;++i){
				if(matriz1[i][0]==codigo){
				gotoxy(44,9);
				cout<<nombre[i];
				gotoxy(44,10);
				cout<<matriz1[i][1];
				gotoxy(44,11);
				cout<<matriz1[i][2];
				int ganancia= matriz1[i][2]-matriz1[i][1];
				gotoxy(44,12);
				cout<<ganancia;
				gotoxy(15,13);
				cout<<matriz1[i][3]<<endl;
				int gatot=ganancia*matriz1[i][3];
				gotoxy(45,13);
				cout<<gatot<<endl;
			}	
			}
			
			
			cout<<"Desea continuar o volver al menu? 1.Continuar 2.Menu  ",cin>>decision;
			if(decision==1){
				validacion=1;
			}else{
				validacion=0;
			}
			}
			break;

		case 3:
			system("cls");
			cout<<"Cuantos clientes desea ingresar? Maximo 5 ",cin>>num2;
			if (num2>5) {
				system("cls");
				cout<<"Valor incorrecto"<<endl;
				system("pause");
			}else{
			system("cls");
			gotoxy(5,4);
			cout<<"NIT"<<endl;
			gotoxy(25,4);
			cout<<"Nombre"<<endl;
			gotoxy(45,4);
			cout<<"Direccion"<<endl;
			gotoxy(65,4);
			cout<<"Telefono"<<endl;
			gotoxy(85,3);
			cout<<"Tipo Cliente"<<endl;
			gotoxy(85,4);
			cout<<"   A o B"<<endl;
			gotoxy(5,5);
			cout<<"_____________________________________________________________________________________________"<<endl;
			for(int i=0;i<num2;++i){
				gotoxy(5,6+i);
				cin>>NIT[i];
				 if (i==1){
						  do{
						  if (NIT[1]==NIT[0]){
							  gotoxy(5,6+i);
							  cout<<"        "<<endl;
							  gotoxy(5,6+i);
							  cin>>NIT[i];
							  
						 }
						  } while(NIT[1]==NIT[0]);
					  

					}
						 if (i==2){
						  do{
						  if (NIT[2]==NIT[0] || NIT[2]==NIT[1]){
							  gotoxy(5,6+i);
							  cout<<"                       "<<endl;
							  gotoxy(5,6+i);
							  cin>>NIT[i];
							  
						 }
						  } while(NIT[2]==NIT[0] || NIT[2]==NIT[1]);
						 }

						  if (i==3){
						  do{
						  if (NIT[3]==NIT[2] || NIT[3]==NIT[1] || NIT[3]==NIT[0] ){
							  gotoxy(5,6+i);
							  cout<<"       "<<endl;
							  gotoxy(5,6+i);
							  cin>>NIT[i];
						 }
						  } while(NIT[3]==NIT[2] || NIT[3]==NIT[1] || NIT[3]==NIT[0]);
						 }
						 if (i==4){
						  do{
						  if (NIT[4]==NIT[3] || NIT[4]==NIT[2] || NIT[4]==NIT[1] || NIT[4]==NIT[0] ){
							  gotoxy(5,6+i);
							  cout<<"     "<<endl;
							  gotoxy(5,6+i);
							  cin>>NIT[i];
							  
						 }
						  } while(NIT[4]==NIT[3] || NIT[4]==NIT[2] || NIT[4]==NIT[1] || NIT[4]==NIT[0]);
						 }
				for(int a=0;a<4;++a){
					gotoxy(25+(20*a),6+i);
					cin>>matriz2[i][a];
				}
				
			}
			cout<<"Desea volver al menu o cerrar el programa? 1.Menu 2.Cerrar  ",cin>>decision;
			if(decision==1){
				validacion=0;
			}else{
				validacion=1;
			}

			}
			break;
		case 4:	
			validacion=1;
			while(validacion==1){
			system("cls");
			gotoxy(25,4);
			cout<<"INFOPRADO"<<endl;
			gotoxy(25,5);
			cout<<"28 Calle 7-58 Zona 11"<<endl;
			gotoxy(25,6);
			cout<<"Tel. 2442 3411"<<endl;
			gotoxy(25,7);
			cout<<"Consulta Clientes"<<endl;
			gotoxy(5,8);
			cout<<"________________________________________________________________________________________________"<<endl;
			gotoxy(5,9);
			cout<<"NIT ,Si no aparece informacion ,su NIT NO EXISTE   ",cin>>nit;
			gotoxy(5,10);
			cout<<"Nombre Cliente: "<<endl;
			gotoxy(5,11);
			cout<<"Direccion Cliente: "<<endl;
			gotoxy(5,12);
			cout<<"Categoria Cliente: "<<endl;
			gotoxy(30,14);
			cout<<"Telefono: "<<endl;
			for(int i=0;i<num2;++i){
			    if(NIT[i]==nit){
				gotoxy(45,10);
				cout<<matriz2[i][0];
				gotoxy(45,11);
				cout<<matriz2[i][1];
				gotoxy(45,12);
				cout<<matriz2[i][3];
				gotoxy(45,14);
				cout<<matriz2[i][2]<<endl;
			}
		}
			
			
			cout<<"Desea continuar o volver al menu? 1.Continuar 2.Menu  ",cin>>decision;


			if(decision==1){
				validacion=1;
			}else{
				validacion=0;
			}
			}
			break;
		case 5:
			facturas=1;
			validacion=1;
			while(validacion==1){
			system("cls");
			gotoxy(45,5);
			cout<<"INFOPRADO"<<endl;
			gotoxy(45,6);
			cout<<"28 Calle 7-58 Zona 11"<<endl;
			gotoxy(45,7);
			cout<<"Tel.2442 3411"<<endl;
			gotoxy(5,8);
			cout<<"_________________________________________________________________________________________"<<endl;
			gotoxy(5,9);
			cout<<"NIT : ",cin>>nit;
			gotoxy(65,9);
			cout<<"FacturaNo. "<<facturas<<endl;
			//
			gotoxy(5,10);
			cout<<"Nombre del Cliente: "<<endl;
			gotoxy(5,12);
			cout<<"Direccion"<<endl;
			gotoxy(45,12);
			cout<<"Telefono: "<<endl;
			gotoxy(70,12);
			cout<<"Tipo Cliente: "<<endl;
			gotoxy(5,13);
			cout<<"_________________________________________________________________________________________"<<endl;
			gotoxy(5,15);
			cout<<"Codigo"<<endl;
			gotoxy(5,16);
			cout<<"Producto"<<endl;
			gotoxy(25,16);
			cout<<"Nombre Producto"<<endl;
			gotoxy(45,16);
			cout<<"Cantidad"<<endl;
			gotoxy(65,16);
			cout<<"Precio"<<endl;
			gotoxy(85,16);
			cout<<"Total Venta"<<endl;
			gotoxy(5,17);
			cout<<"__________________________________________________________________________________________"<<endl;
			gotoxy(60,25);
			cout<<"Subtotal"<<endl;
			gotoxy(60,26);
			cout<<"Descuento"<<endl;
			gotoxy(60,27);
			cout<<"Subtotal Cliente"<<endl;
			gotoxy(60,28);
			cout<<"IVA"<<endl;
			gotoxy(60,29);
			cout<<"____________________________________"<<endl;
			gotoxy(60,30);
			cout<<"Total a Pagar"<<endl;
			
			
			for(int i=0;i<num2;++i){
                if(NIT[i]==nit){
				gotoxy(24,10);
				cout<<matriz2[i][0];
				gotoxy(15,12);
				cout<<matriz2[i][1];
				gotoxy(54,12);
				cout<<matriz2[i][2];
				gotoxy(85,12);
				cout<<matriz2[i][3]<<endl;
				cliente=matriz2[i][3];
			}
			
			}   
			cout<<endl;
			cout<<"Productos a ingresar(MAXIMO 5)?Articulos registrados "<<num<<" ,ingrese: ",cin>>productos;
			if(productos<=num){
			for(int i=0;i<productos;++i){
				
				gotoxy(5,18+i);
				cin>>codigo;
				for(int a=0;a<num;++a){
			if(matriz1[a][0]==codigo){
				gotoxy(25,18+i);
				cout<<nombre[a];
				gotoxy(45,18+i);
				cin>>cantidades[a];
				if (cantidades[a]>matriz1[a][3]){
					gotoxy(45,18+i);
					cout<<"No hay mucha existencia"<<endl;
					Sleep(100);
					validacion=0;
				}
			    matriz1[a][3]=matriz1[a][3]-cantidades[a];
				gotoxy(65,18+i);
				cout<<matriz1[a][2];
				 venta=cantidades[a]*matriz1[a][2];
				gotoxy(85,18+i);
				cout<<venta<<endl;
				
				subtotal=subtotal+venta;
				
			
			}
				}
			}	
			}else{
				system("cls");
				cout<<"El numero de productos excede de 5"<<endl;
			}
			gotoxy(85,25);
			cout<<subtotal;
			for(int i=0;i<num2;++i){
			if(cliente=="A"){
				 descuento=subtotal*0.06;
				 gotoxy(85,26);
				 cout<<descuento<<endl;
			}else if(cliente=="B"){
				
				 descuento=subtotal*0.02;
				 gotoxy(85,26);
				 cout<<descuento<<endl;
			}
			}
			subc=subtotal-descuento;
			gotoxy(85,27);
			cout<<subc<<endl;
			iva=subc*0.12;
			gotoxy(85,28);
			cout<<iva<<endl;
			total=subc+iva;
			gotoxy(85,30);
			cout<<total<<endl;
			subtotal=0;
			descuento=0;
			subc=0;
			iva=0;
			total=0;
			cout<<"Desea continuar o volver al menu? 1.Continuar 2.Menu ",cin>>decision;
			if(decision==1){
				validacion=1;
				facturas=facturas + 1;
			}else{
				validacion=0;
			}
			}
                        break;
		case 6:
			return 0;
  }		
}
}//Hecho por Sebraq en 5/24/2020 
}
