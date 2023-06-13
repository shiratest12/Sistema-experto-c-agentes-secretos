//============================================================================
// Name        : Agentes.cpp
// Author      : Yazmin_Luevano
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <clocale>

using namespace std;

int i;
bool repite;

void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
void dibujarCuadro(int x1,int y1,int x2,int y2){
	int i;

    for (i=x1;i<x2;i++){
		gotoxy(i,y1); cout << "\304"; //linea horizontal superior
		gotoxy(i,y2); cout << "\304"; //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		gotoxy(x1,i); cout <<"\263"; //linea vertical izquierda
		gotoxy(x2,i); cout <<"\263"; //linea vertical derecha
	}

    gotoxy(x1,y1); cout<< "\332";
    gotoxy(x1,y2); cout<< "\300";
    gotoxy(x2,y1); cout<< "\277";
    gotoxy(x2,y2); cout<< "\331";
}

bool Valnum(string linea)
{
   bool b = true;
   int longitud = linea.size();

   if (longitud == 0) { // Cuando el usuario pulsa ENTER
      b = false;
   } else if (longitud == 1 && !isdigit(linea[0])) {
      b = false;
   } else {
      int i;}

      if (linea[0] == '+' || linea[0] == '-'){

         i = 1;}
      else
         i = 0;

      while (i < longitud) {
         if (!isdigit(linea[i])) {
            b = false;
            break;
         }
         i++;
      }
}

 class Agente{

public:
    //paises
    	bool espana=0,egipto=0, francia=0, japon=0;

	//metodos

void regipto();
void rfrancia();
void rjapon();
void respana();
void asignarv();

}a;

Agente tomas;
Agente luisa;
Agente alberto;
Agente carmen;

bool repeat;
int opcion;
string op;



void Agente::asignarv(){
	tomas.espana=0;
	tomas.francia=0;
	tomas.japon=0;
	tomas.egipto=0;
	carmen.espana=0;
	carmen.francia=0;
	carmen.japon=0;
	carmen.egipto=0;
	luisa.espana=0;
	luisa.francia=0;
	luisa.japon=0;
	luisa.egipto=0;
	alberto.espana=0;
	alberto.francia=0;
	alberto.japon=0;
	alberto.egipto=0;
}

int main ()
{
   system("color f0");
do{

system("cls");
system("mode con: cols=80 lines=25");
dibujarCuadro(0,0,78,24);
dibujarCuadro(1,1,77,3);
gotoxy(30,2); cout<<"Agentes_secretos"<<endl;
gotoxy (3,5);cout<<"1)Egipto"<<endl;
gotoxy (3,6);cout<<"2)Espa"<<char(164)<<"a"<<endl;
gotoxy (3,7);cout<<"3)Francia "<<endl;
gotoxy (3,8);cout<<"4)Japon"<<endl;
gotoxy (3,9);cout<<"5)Salir"<<endl;

	do{

	   gotoxy (3,10);	cout<<"Seleccione una opcion: ";
cin>>op;
if (Valnum(op)) {
         repite = false;
      } else
         cout << "Ingrese un dato valido: " << endl;

   } while (repite);

   opcion = atoi(op.c_str());



switch(opcion){
system("cls");

	    	case 1:{
system("cls");
dibujarCuadro(0,0,78,24);
dibujarCuadro(1,1,77,3);
gotoxy(30,2); cout<<"Agentes_secretos"<<endl;
	    		gotoxy(10,4);cout<<"Egipto"<<endl<<endl;
	    		a.asignarv();
	    		tomas.egipto=1;
	    		a.regipto();
	    		cin.get();
	    		getch();
				break;}

	    	case 2:{ system("cls");
dibujarCuadro(0,0,78,24);
dibujarCuadro(1,1,77,3);
gotoxy(30,2); cout<<"Agentes_secretos"<<endl;
	   gotoxy(10,4);	cout<<"Espa"<<char(164)<<"a"<<endl;
	    		a.asignarv();
	    		tomas.espana=1;
	    		a.respana();
	    		cin.get();
                getch();
				break;}

	    	case 3:{
system("cls");
dibujarCuadro(0,0,78,24);
dibujarCuadro(1,1,77,3);
gotoxy(30,2); cout<<"Agentes_secretos"<<endl;
	    	gotoxy(10,4);	cout<<"Francia"<<endl<<endl;
	    		a.asignarv();
	    		tomas.francia=1;
	    		a.rfrancia();
	    		cin.get();
	    		getch();
				break;}

	    	case 4:{
system("cls");
dibujarCuadro(0,0,78,24);
dibujarCuadro(1,1,77,3);
gotoxy(30,2); cout<<"Agentes_secretos"<<endl;
	    	gotoxy(10,4);	cout<<"Japon"<<endl<<endl;
	    		a.asignarv();
	    		tomas.japon=1;
	    		gotoxy (3,5);a.rjapon();
	    		cin.get();
	    		getch();
				break;}
case 5: return 0;

			}}while(opcion!=6);
    return 0;

}


void Agente:: rfrancia(){

tomas.espana==0;
//Si tomas esta en francia,
	if(tomas.francia==1){
		Sleep(25);
		cout<<"Tomas esta en Francia"<<endl;
		luisa.espana==0; //luisa no esta en españa
		cout<<"Luisa no esta en Espa"<<char(164)<<"a"<<endl;

			alberto.francia==0;
			cout<<"Alberto no esta en Francia "<<endl;

		if(tomas.egipto==0){
					if(carmen.egipto==1 || alberto.egipto==1 || luisa.egipto==1 || tomas.egipto==1){
						carmen.egipto=0;
						cout<<"Carmen no esta en Egipto "<<endl;
					}else{
						carmen.egipto=1;
						cout<<"Carmen esta en Egipto "<<endl;
					}
		}
		if(tomas.japon==0){
		 if(carmen.francia==1 || alberto.francia==1 || luisa.francia==1 || tomas.francia==1){
				carmen.francia=0;
				cout<<"Carmen no esta en Francia "<<endl;
			}else{
				carmen.francia=1;
				cout<<"Carmen esta en Francia "<<endl;}}

		}}


void Agente::regipto(){

	// regla 5: si tomas esta en egipto
	if(tomas.egipto==1){Sleep(25);
		cout<<"Tomas esta en Egipto "<<endl;
		//carmen no esta en egipto
		cout<<"Carmen no esta en Egipto "<<endl;
        carmen.egipto==0;
		if(tomas.francia==0){
			if(carmen.espana==1 || alberto.espana==1 || luisa.espana==1 || tomas.espana==1){
				luisa.espana=0;
				cout<<"Luisa no esta en Espa"<<char(164)<<"a"<<endl;
			}else{
				luisa.espana=1;
				cout<<"Luisa esta en Espa"<<char(164)<<"a"<<endl;}}

		//regla 4: si tomas no esta en españa entonces alberto esta en francia
		if(tomas.espana==0){
			if(carmen.francia==1 || alberto.francia==1 || luisa.francia==1 || tomas.francia==1){
				alberto.francia=0;
				cout<<"Alberto no esta en Francia "<<endl;
			}else{
				alberto.francia=1;
				cout<<"Alberto esta en Francia "<<endl;			}}

        carmen.francia==0;
		if(tomas.japon==0){
			if(carmen.francia==1 || alberto.francia==1 || luisa.francia==1 || tomas.francia==1){
				carmen.francia=0;
				cout<<"Carmen esta en Francia"<<endl;
			}else{
				carmen.francia=1;
				cout<<"Carmen no esta en Francia "<<endl;}}} }

void Agente::respana(){
	Sleep(25);
	//Si tomas esta en españa
	if(tomas.espana==1){

		cout<<"Tomas esta en Espa"<<char(164)<<"a"<<endl;
		cout<<"Alberto no esta en Francia"<<endl;
		alberto.francia==0;//alberto no esta en francia
		//cout<<"Alberto no esta en francia"<<endl;

		if(tomas.francia==0){
			if(carmen.espana==1 || alberto.espana==1 || luisa.espana==1 || tomas.espana==1){
				luisa.espana=1;
				cout<<"Luisa no esta en Espa"<<char(164)<<"a"<<endl;
			}else{
				luisa.espana=0;
				cout<<"Luisa esta en Espa"<<char(164)<<"a"<<endl;}}

		if(tomas.egipto==0){
			if(carmen.egipto==1 || alberto.egipto==1 || luisa.egipto==1 || tomas.egipto==1){
				carmen.egipto=0;
				cout<<"Carmen no esta en Egipto "<<endl;}
				else{
				carmen.egipto=1;
				cout<<"Carmen esta en Egipto "<<endl;
			}}

		if(tomas.japon==0){
			if(carmen.francia==1 || alberto.francia==1 || luisa.francia==1 || tomas.francia==1){
				carmen.francia=0;
				cout<<"Carmen no esta en Francia "<<endl;
			}else{
				carmen.francia=1;
				cout<<"Carmen esta en Francia "<<endl;}}
	}}


void Agente::rjapon(){
	Sleep(25);
	if(tomas.japon==1){
    //regla 7: si tomas esta en japon
		cout<<"Tomas esta en Japon"<<endl;
		 //carmen no esta en francia
		cout<<"Carmen no esta en Francia"<<endl;
carmen.francia=0;
		if(tomas.egipto==0){
			if(carmen.egipto==1 || alberto.egipto==1 || luisa.egipto==1 || tomas.egipto==1){
				carmen.egipto=0;
				cout<<"Carmen no esta en Egipto"<<endl;
			}else{
				carmen.egipto=1;
				cout<<"Carmen esta en Egipto"<<endl;}}

		if(tomas.espana==0){
			if(carmen.francia==1 || alberto.francia==1 || luisa.francia==1 || tomas.francia==1){
				alberto.francia=0;
				cout<<"Alberto no esta en Francia "<<endl;
			}else{
				alberto.francia=1;
				cout<<"Alberto esta en Francia "<<endl;}}

		if(tomas.francia==0){

			if(carmen.espana==1 || alberto.espana==1 || luisa.espana==1 || tomas.espana==1){
				luisa.espana=0;
				cout<<"Luisa no esta en Espa"<<char(164)<<"a"<<endl;
			}else{
				luisa.espana=1;
				cout<<"Luisa esta en Espa"<<char(164)<<"a"<<endl;}}}}
