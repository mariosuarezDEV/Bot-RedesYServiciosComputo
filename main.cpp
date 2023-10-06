#include <iostream>
#include <string>
#include <cctype>

#include "recursos/temas.h"

//variables goblales
string usr = "Mi mensaje: ";
string bot = "\nMar.io >> ";
temas t;


using namespace std;

int main(int argc, char const *argv[])
{
	t.meter("que es linux?");//1
	t.meter("como crear usuarios en linux?"); //2
	t.meter("recomienda distros linux"); //3
	t.meter("como crear grupos en linux?"); //4
	t.meter("como instalar programas en linux?"); //5
	t.meter("dime los comandos basicos de linux"); //6
	t.meter("como hacer un script en bash?"); //7
	t.meter("explica los permisos en linux"); //8
	t.meter("para que sirve apt en linux?"); //9
	t.meter("como instalar programas desde codigo fuente en linux?");//10
	t.meter("dime la estructura para crear un nodo en c++"); //11
	t.meter("como configurar la red en linux?"); //12
	t.meter("como crear un usuario en mariadb?");
	t.meter("como crear una tabla en mariadb?");

	string mensaje;
	cout<<"Bievenido a Mar.io bot, En que puedo ayudarte? (recuerda escribir 'comandos' si no sabes como pedir algo)"<<endl<<endl;
	while(true){
		cout<<usr;
		getline(cin, mensaje,'\n');

		for (int i = 0; i < mensaje.size(); ++i)
		{
			mensaje[i]=tolower(mensaje[i]);
		}

		if(mensaje == "que puedes hacer?"){
			cout<<bot;
			cout<<"Por ahora tengo conocimiento basico en linux, puedo decirte como crear usuarios y grupos, explicarte algunos temas y demas, puedes escribir 'comandos' y podras ver una lista de todas las preguntas que puedes hacerme :)"<<endl<<endl;
		} else if(mensaje == "hola"){
			cout<<bot;
			cout<<"Hola, en que puedo ayudarte hoy?"<<endl<<endl;
		} else if (mensaje == "adios")
		{
			cout<<bot;
			cout<<"Hasta la proxima:)"<<endl<<endl;
			break;
		} else if (mensaje == "comandos")
		{
			cout<<bot;
			cout<<"Puedes puedes realizar las siguientes preguntas!"<<endl<<endl;
			t.mostrar();
			cout<<endl;
		} else if(mensaje == "quien te desarrollo?"){
			cout<<bot;
			cout<<"Mi desarrollador se llama Luis Mario Cervantes Suarez, yo estoy creado en el lenguaje c++ y soy un bot que ayuda a los estudiantes con sus dudas academicas :), Hay algo en lo que pueda ayudarte?"<<endl<<endl;
		}else if(mensaje == ""){
			cout<<bot;
			cout<<"Aunque fui creado por Luis Mario Cervantes Suarez y creas que soy un ser mistico, no tengo las habilidades de leer la mente, por ahora...\nEn fin, prueba escribiendo un mensaje :)"<<endl<<endl;
		}else if(mensaje == "como te llamas?"){
			cout<<bot;
			cout<<"A menos de que no sepas leer, es imposible que no sepas como me llamo, mi nombre es 'Mar.io' soy un bot de asistencia para los amigos de Mario pero tengo las capacidadees de ayudar a cualquier alumno de Redes y Servicios de Computo\nQuieres ponerlo a prueba?"<<endl<<endl;
			cout<<usr;
			string flag;
			getline(cin,flag,'\n');
			for (int i = 0; i < flag.size(); ++i)
			{
				flag[i]=tolower(flag[i]);
			}
			if (flag == "no")
			{
				cout<<bot;
				cout<<"Okey, entonces aqui termina lo nuestro :("<<endl<<endl;
				break;
			} else if(flag=="si"){
				cout<<bot;
				cout<<"Perfecto, estare esperando tu mensjae :)"<<endl<<endl;
			} else if (flag != "no" &&  flag != "si"){
				cout<<"Creo que no entendiste la pregunta, no pasa nada, por algo preguntaste como me llamo JAJAJ (no sabes leer)"<<endl<<endl;
			}
		}else{

		int idTema= t.obtenerTema(mensaje);

		if (idTema != -1)
		{
			switch(idTema){
				case 1:{
					/*que es linux*/
					cout<<bot;
					cout<<"Linux es un sistema operativo SO open source. En 1991, Linus Torvalds lo diseno y creo a modo de pasatiempo. Mientras estaba en la universidad, intento crear una version open source, alternativa y gratuita del sistema operativo MINIX, que a su vez se basaba en los principios y el diseño de Unix."<<endl<<endl;	
					break;
				}
				case 2:{
					/*Como crear usuarios en linux*/
					cout<<bot;
					cout<<"Para crear usuarios en distros basadas en debian puedes usar el siguente comando en tu terminal: "<<endl;
					cout<<"\x1b[33m";
					cout<<"$: sudo useradd -d /home/usuario -m -s /bin/bash -c 'NombreUsuario' -g grupo NombreUsuario"<<endl;
					cout<<"\x1b[37m";
					cout<<"Posteriormente, debes asignarle una clave de acceso la cuenta de tu nuevo usuario"<<endl;
					cout<<"$: sudo passwd NombreUsuario"<<endl<<endl;
					break;
				}
			case 3:{
					/*recomienda distros linux*/
					cout<<bot;
					cout<<"Hay una gran variedad de distribuciones linux, las populares son:"<<endl;
					cout<<"Ubuntu - Debian - Fedora - Red Hat - CentOS"<<endl;
					cout<<"Aunque esa lista fue corta, puedes encontrar mayor informacion en la siguiente pagina: distrowatch.com"<<endl;
					cout<<"No hay una mejor distro, pero puedo recomendarte que uses Kubuntu, es una distro basada en ubuntu y con el entorno KDE plasma, si eres un usuario avanzado, podrias probar Fedora con el escritorio KDE plasma.\nCada distro tiene un enfoque y puede ser usada para distintas tareas, asi que puedes investigar mas segun lo que vayas a necesitar"<<endl<<endl;

					break;
				}
			case 4:{
					/*Como crear grupos en linux*/
					cout<<bot;
					cout<<"Para crear grupos en distros basadas en debian puedes usar el siguente comando en tu terminal: "<<endl;
					cout<<"$: sudo groupadd nombreGrupo"<<endl<<endl;
					break;
				}
			case 5:{
					/*como instalar programas en linux?*/
					cout<<bot;
					cout<<"Instalar programas en linux tiene muchas variantes, la que te mostrare se llama gdebi, es comando que funciona solo en distros basadas en debian.\ngdebi me gusta porque instala todas las dependencias que necesita tu paquete .deb, para comenzar a usar gdebi, debes instalarlo desde tu terminal."<<endl;
					cout<<"$: sudo apt-get install gdebi"<<endl;
					cout<<"Una vez instalado, ve al directorio donde esta tu paquete .deb y escribie lo siguiente en tu terminal:"<<endl;
					cout<<"$: sudo gdebi nombre_de_tu_paquete.deb"<<endl;
					cout<<"Esto hara que se instalen todas las dependencias que necesita el archivo .deb para poder ser instalado y ejecutado :)"<<endl<<endl;
					break;
				}
			case 6:{
					/*dime los comandos basicos de linux*/
					cout<<bot;
					cout<<"Los comandos basicos en linux son indispensables para poder usar el sistema operativo de forma rapida, acontinuacion te dare una lista de estos comandos para comiences a ser un experto en linux :)"<<endl;
					cout<<"$: cd"<<endl;
					cout<<"Sirve para cambiar a cualquier directorio, su esctructura se conforma de el comando cd y despues la ruta a la que quieres ir, por ejemplo: "<<endl;
					cout<<"$: cd /home/usuario/Documentos/"<<endl<<endl;
					cout<<"$: man"<<endl;
					cout<<"Este es un comando indispensable si quieres aprender a usar tu terminal linux, el comando man dezglosa una ayuda muy detalla sobre el comando que quieras ejecutar, por ejemplo, si quieres saber para que sirve y como funciona el comando 'cd', puedes ejecutar la siguiente instruccion en tu terminal:"<<endl;
					cout<<"$: man cd"<<endl;
					cout<<"Esa instuccion te desglozara toda una documentacion sobre el comando cd"<<endl<<endl;
					cout<<"$: ls"<<endl;
					cout<<"Este comando nos sirve para ver todos los direcctorios y archivos en la que estamos ubicados en nuestra terminal"<<endl<<endl;
					cout<<"$: pwd"<<endl;
					cout<<"Este nos da como salida la ruta en la que esta nuestra terminal"<<endl<<endl;
					break;
				}
			case 7:{
					/*como hacer un script en bash*/
					cout<<bot;
					cout<<"Bash es un lenguaje propio de linux y es usado comunmente para automatizar tareas del sistema operativo.\nTe mostrare y explicare la sintaxis que debes seguir para poder crear un archivo en bash."<<endl;
					cout<<"Con tu editor de codigo favorito de terminal crea un archivo y como termiacion escribe .bash"<<endl;
					cout<<"$: hx hola.bash"<<endl;
					cout<<"Primero debes escoger el shell que usara tu script, en este caso usaremos bash"<<endl;
					cout<<"!#usr/bin/env bash"<<endl;
					cout<<"Ahora deberias escribir el bloque de codigo que quieres que tu script ejecute.\nMi script dira solamente hola, pero tu puedes hacer mas cosas, recuerda que yo solo te estoy msotrando como crear un script"<<endl;
					cout<<"echo hola"<<endl;
					cout<<"Ahora solo guardaremos nuesto script y solo queda ejecutarlo!\nAntes de decirte como ejecutar tu script, veamos como queda finalmente: "<<endl;
					cout<<"!#usr/bin/env bash\necho hola"<<endl;
					cout<<"Ahora para ejecutar nuestro script solo basta con escribir en nuestra terminal el siguiente comando: "<<endl;
					cout<<"$: bash nombre_script.bash"<<endl;
					cout<<"Ahora nuestro script debera ejecutarse y a realizar todo el codigo que escribirimos :)"<<endl<<endl;
					break;
				}
			case 8:{
					/*explica los permisos en linux*/
					cout<<bot;
					cout<<"En el sistema operativo Linux, los permisos son una parte fundamental de la seguridad y la gestion de archivos. Los permisos determinan quién puede acceder a un archivo o directorio y qué tipo de acciones pueden realizar, como leer, escribir o ejecutar. Linux utiliza un sistema de permisos basado en el modelo de seguridad de UNIX. Los permisos se aplican tanto a archivos como a directorios y se pueden dividir en tres categorías principales\nLos permisos se aplican tanto a archivos como a directorios y se pueden dividir en tres categorías principales:"<<endl<<endl;
					cout<<"Propietario (Owner): El propietario es el usuario que creo el archivo o directorio. El propietario tiene control total sobre el archivo o directorio, incluyendo la capacidad de cambiar permisos, eliminarlo o modificarlo."<<endl;
					cout<<"\nGrupo (Group): Cada archivo y directorio en Linux pertenece a un grupo. Los usuarios que son miembros de ese grupo tienen ciertos permisos sobre el archivo o directorio. Por ejemplo, si el propietario establece permisos de lectura para el grupo, todos los miembros del grupo podrán leer el archivo."<<endl;
					cout<<"\nOtros (Others): Esta categoria incluye a todos los usuarios que no son el propietario ni miembros del grupo al que pertenece el archivo o directorio. Los permisos de otros determinan lo que pueden hacer estos usuarios con el archivo o directorio."<<endl;
					cout<<"Presiona una tecla para seguir con el tema..."<<endl<<endl;
					system("pause>>null");
					cout<<"---------------------------------------------------------------------------"<<endl;
					cout<<"\nLos permisos se dividen en tres tipos principales:"<<endl;
					cout<<"\nLectura (Read, representado como 'r'): Permite a un usuario ver el contenido de un archivo o ver la lista de archivos en un directorio. Para directorios, tambien permite listar su contenido."<<endl;
					cout<<"\nEscritura (Write, representado como 'w'): Permite a un usuario modificar o eliminar un archivo. Para directorios, permite crear, eliminar o renombrar archivos dentro de el."<<endl;
					cout<<"\nEjecucion (Execute, representado como 'x'): Para archivos, permite ejecutar un programa o script. Para directorios, permite acceder a su contenido y navegar por el."<<endl;
					cout<<"Presiona una tecla para seguir con el tema..."<<endl<<endl;
					system("pause>>null");
					cout<<"---------------------------------------------------------------------------"<<endl;
					cout<<"Los permisos se muestran en la línea de comando de la siguiente manera: "<<endl;
					cout<<"\t-rwxr-xr-x 1 usuario grupo 12345 oct  5 15:30 archivo.txt"<<endl;
					cout<<"Puedes cambiar los permisos en Linux utilizando comandos como chmod para modificarlos. Por ejemplo: "<<endl;
					cout<<"\tchmod +x archivo.txt\n\tchmod -r grupo archivo.txt"<<endl<<endl;
					break;
				}
			case 9:{
					/*Como crear grupos en linux*/
					cout<<bot;
					cout<<"El comando apt es un manejador de paquetes en distribuciones basadas en Debian.El comando apt significa Advanced Packing Tool, dentro de todas posibles opciones podemos destacar las siguientes: "<<endl;
					cout<<"Actualizar el catalogo de repositorios"<<endl;
					cout<<"\t$: apt update"<<endl;
					cout<<"Instalar paquetes disponibles en los repositorios"<<endl;
					cout<<"\t$: apt install paquete"<<endl;
					cout<<"Borrar un paquete instalado"<<endl;
					cout<<"\t$: apt remove paquete"<<endl;
					cout<<"Buscar paquete"<<endl;
					cout<<"\t$: apt search paquete"<<endl;
					cout<<"Actualizar paquete"<<endl;
					cout<<"\t$: apt upgrade"<<endl;
					cout<<"Estos son los comandos principales de apt para que puedas empezar a trabajar con tus paquetes en tu distribucion linux :)"<<endl<<endl;
					break;
				}
			case 10:{
					/*Como crear grupos en linux*/
					cout<<bot;
					cout<<"Instalar programas desde el codigo fuente puede ser una tarea muy compleja, yo te guiare por los pasos mas importantes para que tu descarga e instalacion sean correctos, pero aun asi, no olvides que leer la documentacion oficial del programa que quieres instalar es muy importante para comprender cada punto de la instalacion."<<endl;
					cout<<"En este ejemplo vamos a instalar 'tree', es perfecto para explicar los pasos de instalacion desde codigo fuente :)"<<endl<<endl;
					cout<<"Vamos a descargar el codigo fuente, este lo puedes encontrar en la pagina oficial o repositorios de Git"<<endl;
					cout<<"La pagina de descarga de Tree es la siguiente: https://mama.indstate.edu/users/ice/tree/"<<endl;
					cout<<"Para descomprimir un archivo tar puedes ejecutar el siguiente comando: "<<endl;
					cout<<"\n\t$: tar -xvf archivo.tar"<<endl<<endl;
					cout<<"Ahora nos vamos a nuestro directorio: "<<endl;
					cout<<"\n\t$: cd direcorio"<<endl<<endl;
					cout<<"Presiona una tecla para seguir con el tema..."<<endl<<endl;
					system("pause>>null");
					cout<<"---------------------------------------------------------------------------"<<endl;
					cout<<"Ahora podemos listar nuestros archivos ejecutano el comando:"<<endl;
					cout<<"\n\t$: ls"<<endl<<endl;
					cout<<"Vamos a buscar el archivo 'README' o 'INSTALL', ya que en esos archivos vienen las dependencias necesarias y pasos de configuracion e instalacion.\nPara leer nuestros archivos haremos uso del comando 'more'."<<endl<<endl;
					cout<<"\t$: more README"<<endl<<endl;
					cout<<"Para la instalacion de tree, tendremos que ver el archivo INSTALL (esto lo sabemos gracias a que el archivo README hace referencia a el"<<endl;
					cout<<"Presiona una tecla para seguir con el tema..."<<endl<<endl;
					system("pause>>null");
					cout<<"---------------------------------------------------------------------------"<<endl;
					cout<<"En el archivo de configuracion podemos configurar el PREFIX: El PREFIX es la ruta de instalacion, sera el directorio donde se encuentren todos los archivos de nuestro programa"<<endl;
					cout<<"\nUna vez completada nuestra configuracion, escribiremos el comando make:"<<endl;
					cout<<"\n\t$: make"<<endl<<endl;
					cout<<"Ahora como usuario root"<<endl<<endl;
					cout<<"\t$: sudo su"<<endl<<endl;
					cout<<"ejecutaremos el siguiente comando: "<<endl<<endl;
					cout<<"\t$root: make install"<<endl<<endl;
					cout<<"Perfecto, has completado la instalacion de tu programa 'Tree' para probarlo, puedes salir de root:"<<endl;
					cout<<"\n\t$root: exit"<<endl<<endl;
					cout<<"Presiona una tecla para seguir con el tema..."<<endl<<endl;
					system("pause>>null");
					cout<<"---------------------------------------------------------------------------"<<endl;
					cout<<"\n\nY ahora puedes ejecutar tu script escribiendo en consola el siguiente comando:"<<endl<<endl;
					cout<<"\t$: ./tree"<<endl<<endl;
					cout<<"Espero esta guia te sirva para instalar mas programas desde codigo fuente :)"<<endl<<endl;
					break;
				}
			case 11:{
					/*Como crear grupos en linux*/
					cout<<bot;
					cout<<"Claro, a continuacion te dare la el codigo para crear un nodo en c++: "<<endl<<endl;

					cout<<"class Nodo{"<<endl;
					cout<<"private:"<<endl;
    				cout<<"\tint dato; //Es el dato que se estará recibiendo"<<endl;
    				cout<<"\tNodo *sig; //Este nos sirve para asignar los siguientes datos"<<endl;
					cout<<"public:"<<endl;
    				cout<<"\tvoid setDato(int dato); //Asignar un dato"<<endl;
    				cout<<"\tvoid setSig(Nodo *s); // o asignar al próximo dato"<<endl;
    				cout<<"\tint getDato(); //obtener el dato en el que estamos apuntando"<<endl;
    				cout<<"\tNodo* getSig(); //obtener el siguiente dato"<<endl;
					cout<<"};"<<endl<<endl;

					cout<<"void Nodo::setDato(int dato){"<<endl;
					cout<<"\tthis->dato=dato;"<<endl;
					cout<<"}"<<endl<<endl;
					cout<<"void Nodo::setSig(Nodo *s){"<<endl;
					cout<<"\tsig = s;"<<endl;
					cout<<"}"<<endl<<endl;

					cout<<"int Nodo::getDato(){"<<endl;
					cout<<"\treturn dato;"<<endl;
					cout<<"}"<<endl<<endl;
					cout<<"Nodo* Nodo::getSig(){"<<endl;
					cout<<"\treturn sig;"<<endl;
					cout<<"}"<<endl<<endl;

					system("pause>>null");
					cout<<"---------------------------------------------------------------------------"<<endl;

					cout<<"De esta forma puedes crear un nodo en c++ que recibe datos de tipo entero :)"<<endl<<endl;
					
					break;
				}
			case 12:{
					/*Como crear grupos en linux*/
					cout<<bot;
					cout<<"Okey, te mostrare como configurar la red en tu distribucion linux :) "<<endl<<endl;
					break;
				}
			case 13:{
					/*Como crear grupos en linux*/
					cout<<bot;
					cout<<"Para crear un usuario en mariadb puedes seguir los siguientes comandos en tu SGBD"<<endl<<endl;
					cout<<"\nCREATE USER 'miusuario'@'%' IDENTIFIED BY 'mipassword';"<<endl<<endl;
					cout<<"El simbolo '\%' indica que todas personas pueden entrar a tu base de datos"<<endl;
					cout<<"Tambien podrias poner una direccion IP, por ejemplo: "<<endl<<endl;
					cout<<"\nCREATE USER 'miusuario'@'192.168.100.' IDENTIFIED BY 'mipassword';"<<endl<<endl;
					cout<<"\nO si lo prefieres, puedes configurar que solo se pueda usar de manera local escribiendo lo siguiente:"<<endl;
					cout<<"\nCREATE USER 'miusuario'@localhost IDENTIFIED BY 'mipassword';"<<endl<<endl;
					cout<<"Despues de tener tu usuario creado, debes asignarle permisos, esto lo puedes hacer escribiendo:"<<endl<<endl;
					cout<<"GRANT ALL ON *.* TO 'miusuario'@'%';"<<endl<<endl;
					cout<<"Recuerda que los permisos aun tiene muchas opciones, puedes personalizarlo de acuerdo a lo que necesites :)"<<endl<<endl;
					break;
				}
			case 14:{
					/*Como crear grupos en linux*/
					cout<<bot;
					cout<<"Crear una tabla en mariaDB es muy sencillo, puedes usar el siguente ejemplo con su explicacion para crear tus propias tablas:"<<endl<<endl;
					cout << "CREATE TABLE nombreTabla(\n"
	                 "\tNombreColumna tipo_de_dato,\n"
	                 "\tNombreColumna tipo_de_dato,\n"
	                 "\tNombreColumna tipo_de_dato,\n"
	                 "\tNombreColumna tipo_de_dato,\n"
                 	"\t);" <<endl<<endl;

                 	cout << "CREATE TABLE datosPersonales(\n"
	                 "\tprimerNombre char(50),\n"
	                 "\t apellidoPaterno char(50),\n"
	                 "\t apellidoMaterno char(50),\n"
	                 "\t edad int,\n"
	                 "\t mayorEdad bool,\n"
                 	"\t);" <<endl<<endl;
                 	cout<<"Asi es como puedes crear una tabla en mariadb :)"<<endl<<endl;
					break;
				}
			}
		}else{
			cout<<bot;
			cout<<"No entendi eso, pero puedes probar con las siguientes preguntas"<<endl<<endl;
			t.mostrar();
			cout<<"\n";
		}

	} //comandos
	}
	

	system("pause>>null");

	return 0;
}