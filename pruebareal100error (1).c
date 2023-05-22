#include <stdio.h>
#include <stdlib.h>
int main()
{
	int op, opcategoria, opcategoria2, opcategoria3, cant, opventas;
	int z_1 = 6, z_2 = 2, tilla1 = 4, tilla2 = 2;
	int valor_z_1=25000, valor_z_2=60000, valor_tilla1=33000, valor_tilla2=72000;

	int pant_af = 10, pant_bf = 10, pole_af = 8, pole_bf = 10, poleron_af = 5, poleron_bf = 6;
	int valor_pant_af=12000, valor_pant_bf=15000, valor_pole_af=7000, valor_pole_bf=12000, valor_poleron_af=20000, valor_poleron_bf=21000;

	int pant_am = 5, pant_bm = 5, pole_am = 10, pole_bm = 10, poleron_am = 6, poleron_bm = 6;
	int valor_pant_am=15000, valor_pant_bm=20000, valor_pole_am=10000, valor_pole_bm=12000, valor_poleron_am=18000, valor_poleron_bm=20000;

	int asp = 2, micro = 3, cocina = 1, lava = 1, refri = 1;
	int valor_asp=50000, valor_micro=55000, valor_cocina=200000, valor_lava=350000, valor_refri=250000;

	int pc = 1, pcpro = 2, note = 1, notepro = 2;
	int valor_pc=500000, valor_pcpro=800000, valor_note=220000, valor_notepro=999990;
	
	int precio_neto;
	float ivafinal, total, iva=0.19;
	
	do
	{
		printf("\n");
		printf("            || Megaretail y Cia S.A ||         \n");
		printf("--------------------- MENU ---------------------\n");
		printf("OPCION 1: procesar una venta.\n");
		printf("OPCION 2: mostrar cantidad de productos disponibles.\n");
		printf("OPCION 3: mostrar el monto total de las ventas.\n");
		printf("OPCION 4: salir. \n");
		printf("-------------------------------------------------\n");
		printf("Ingrese su opcion: ");
		scanf("%d", &op);

		/*REGLA GENERAL DE LA EMPRESA PARA TENER EN CONSIDERACIÓN EN TODAS LAS OPCIONES:
		solo puede comprar un tipo de producto a la vez, pero tiene permitido comprar más de una unidad del mismo
		artículo.*/
		switch (op)
		{ //   PROCESAR UNA VENTA
		case 1:
			/*se muestra el listado de categorías
			de sus productos como otras opciones y la categoría q se escoja se debe mostrar los productos q pertenecen a esa categoría
			y su precio. dps mostrar por pantalla la boleta que la cual tiene los datos de la empresa, el producto seleccionado con su precio
			neto, el IVA y el valor total de su compra. el programa debe volver al menú principal.*/
			printf("\n");
			printf("                  -*.' categorias '*- °'\n");
			printf("\n");
			printf("OPCION 1: zapatos y zapatillas   OPCION 2: moda mujer\n");
			printf("\n");
			printf("OPCION 3: moda hombre            OPCION 4: linea blanca y electronica\n");
			printf("\n");
			printf("OPCION 5: computacion            OPCION 6: atras \n");
			scanf("%d", &opcategoria);
		
			switch (opcategoria)
			/*(OP1)CATEGORIAS*/
			{
			case 1:
				printf("\n");
				printf("Seleccione producto:\n");
				printf("1) Zapato A: Valor $25.000, %d existencias      3) Zapato B: Valor $60.000, %d existencias.\n", z_1, z_2);
				printf("\n");
				printf("2) Zapatilla A: Valor $33.000, %d existencias.  4) Zapatilla B: Valor $72.000, %d existencias.\n", tilla1, tilla2);
				printf("\n");
				scanf("%d", &opcategoria3);
			
				switch (opcategoria3)
			 {
				
					
				case 1: // compra zapatoA
					printf("\n");
					printf("Anote cantidad a llevar: ");
					scanf("%d", &cant);
					if (cant > z_1 || cant < 0)
					{
						printf("Cantidad no valida\n");
						system("pause");
						system("cls");
						return main();
					
					}
					else
					{
						z_1 = z_1 - cant;
							
						
						
						ivafinal= iva * (valor_z_1 * cant); //19% del precio total (contiene la cantidad)
						precio_neto= (valor_z_1 * cant)-ivafinal;//el precio sin el IVA sumado
						total= precio_neto+ivafinal;//el precio con el IVA sumado
					
						system("cls");
					
						printf("\n");
						printf("  -------------------------------------\n");
						printf("        Megaretail y Cia S.A.         \n");
						printf("            99.999.999-9               \n");
						printf("\n");
						printf("Giro: Grandes tiendas\n");
						printf("Direccion: Avenida Fake 1202, Concepcion\n");
						printf("Telefono: 41 222 3333\n");
						printf("Email: contacto@megaretailycia.cl\n");
						printf("  -------------------------------------\n");
						printf("\n");
						printf("ZAPATO A (ZapatosYZapatillas)........\n");
						printf("PRECIO NETO.......................$%d\n", precio_neto);
						printf("IVA...............................$%.0f\n",ivafinal);
						printf("PRECIO TOTAL......................$%.0f\n",total);
						printf("\n");
				
						return main();
						/*agregar el producto seleccionado con su precio
neto, el IVA y el valor total de su compra.*/
					}
					break;

				case 2: // compra zapatoB
					printf("Anote cantidad a llevar: ");
					scanf("%d", &cant);
					if (cant > z_2 || cant < 0)
					{
						printf("Cantidad no valida\n");
					}
					else
					{
						z_2 = z_2- cant;
						ivafinal= iva * (valor_z_2 * cant); 
						precio_neto= (valor_z_2 * cant)-ivafinal;
						total= precio_neto+ivafinal;
							printf("\n");
						printf("  -------------------------------------\n");
						printf("        Megaretail y Cia S.A.         \n");
						printf("            99.999.999-9               \n");
						printf("\n");
						printf("Giro: Grandes tiendas\n");
						printf("Direccion: Avenida Fake 1202, Concepcion\n");
						printf("Telefono: 41 222 3333\n");
						printf("Email: contacto@megaretailycia.cl\n");
						printf("  -------------------------------------\n");
						printf("\n");
						printf("ZAPATO A (ZapatosYZapatillas)........\n");
						printf("PRECIO NETO.......................$%d\n", precio_neto);
						printf("IVA...............................$%.0f\n",ivafinal);
						printf("PRECIO TOTAL......................$%.0f\n",total);
						printf("\n");
				
					}
				
					break;
					
				case 3://compra zapatilla1
					printf("Anote cantidad a llevar: ");
					scanf("%d", &cant);
					if (cant >tilla1 || cant < 0)
					{
						printf("Cantidad no valida\n");
					}
					else
					{
						tilla1 = tilla1 - cant;
						ivafinal= iva * (valor_tilla1 * cant); 
						precio_neto= (valor_tilla1 * cant)-ivafinal;
						total= precio_neto+ivafinal;
							printf("\n");
						printf("  -------------------------------------\n");
						printf("        Megaretail y Cia S.A.         \n");
						printf("            99.999.999-9               \n");
						printf("\n");
						printf("Giro: Grandes tiendas\n");
						printf("Direccion: Avenida Fake 1202, Concepcion\n");
						printf("Telefono: 41 222 3333\n");
						printf("Email: contacto@megaretailycia.cl\n");
						printf("  -------------------------------------\n");
						printf("\n");
						printf("ZAPATO A (ZapatosYZapatillas)........\n");
						printf("PRECIO NETO.......................$%d\n", precio_neto);
						printf("IVA...............................$%.0f\n",ivafinal);
						printf("PRECIO TOTAL......................$%.0f\n",total);
						printf("\n");
				
				
					}
					break;
					
				case 4://compra zapatilla2
					printf("Anote cantidad a llevar: ");
					scanf("%d", &cant);
					if (cant > tilla2 || cant < 0)
					{
						printf("Cantidad no valida\n");
					}
					else
					{
						tilla2 = tilla2 - cant;
					ivafinal= iva * (valor_tilla2 * cant); 
						precio_neto= (valor_tilla2 * cant)-ivafinal;
						total= precio_neto+ivafinal;
						printf("  -------------------------------------\n");
						printf("        Megaretail y Cia S.A.         \n");
						printf("            99.999.999-9               \n");
						printf("\n");
						printf("Giro: Grandes tiendas\n");
						printf("Direccion: Avenida Fake 1202, Concepcion\n");
						printf("Telefono: 41 222 3333\n");
						printf("Email: contacto@megaretailycia.cl\n");
						printf("  -------------------------------------\n");
						printf("\n");
						printf("ZAPATO A (ZapatosYZapatillas)........\n");
						printf("PRECIO NETO.......................$%d\n", precio_neto);
						printf("IVA...............................$%.0f\n",ivafinal);
						printf("PRECIO TOTAL......................$%.0f\n",total);
						printf("\n");
				
					}
					
					break;
					
				default:
					printf("opcion no valida\n");
					
					break;
			
				}

				
			break;

		case 2:
			printf("Seleccione producto:\n");
			printf("1) Pantalon A: Valor $12.000, %d existencias  4) Pantalon B: Valor $15.000, %d existencias.\n", pant_af, pant_bf);
			printf("2) Polera A: Valor $7.000, %d existencias.    5) Polera B: Valor $12.000, %d existencias\n", pole_af, pole_bf);
			printf("3) Poleron A: Valor $20.000, %d existencias   6) Poleron B: Valor $21.000, %d existencias.\n", poleron_af, poleron_bf);
			scanf("%d", &opcategoria3);
			break;
			switch (opcategoria3)
			{
			case 1:
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			break;
			case 6:
			break;
			default:
			break;
			}
			break;

		case 3:
			printf("Seleccione producto:\n");
			printf("1) Pantalon A: Valor $15.000, %d existencias 4) Pantalon B: Valor $20.000, %d existencias\n", pant_am, pant_bm);
			printf("2) Polera A: Valor $10.000, %d existencias.  5) Polera B: Valor $12.000, %d existencias\n", pole_am, pole_bm);
			printf("3) Poleron A: Valor $18.000, %d existencias. 6) Poleron B: Valor $20.000, %d existencias\n", poleron_am, poleron_bm);
			scanf("%d", &opcategoria3);

			switch (opcategoria3)
			{
			case 1:
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:
				break;
			default:
				break;
			}

			break;

		case 4:
			printf("Seleccione producto:\n");
			printf("1. Aspiradora: Valor $50.000, %d existencias.  4. Microondas: Valor $55.000, %d existencias.\n", asp,micro);
			printf("2. Cocina: Valor $200.000, %d existencia.      5. Lavadora: Valor $350.000, %d existencia.\n", cocina, lava);
			printf("3. Refrigerador: Valor $250.000, %d existencia.\n", refri);
			scanf("%d", &opcategoria3);
			switch (opcategoria3)
			{
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			default:
				break;
			}

			break;
		case 5:
			printf("Seleccione producto:\n");
			printf("1) PC de escritorio: Valor $500.000, %d existencias     3) PC gamer: Valor $800.000, %d existencias\n", pc, pcpro);
			printf("2) Notebook: Valor $220.000, %d existencias             4) Notebook gamer: Valor $999.990, %d existencias.\n", note, notepro);
			scanf("%d", &opcategoria3);
			switch (opcategoria3)
			{
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			default:

				break;
			}
			break;

		case 6:
			printf("fin del programa\n");
			break;
		} 

	/*CANTIDAD DE PROD DISPONIBLES*/
	case 2:
		/*el programa deberá mostrar la
		cantidad de existencias de cada producto separados por categoría*/
		printf("-*.' categorias '*- °'\n");
		printf("opcion 1: zapatos y zapatillas   opcion 2: moda mujer\n");
		printf("opcion 3: moda hombre            opcion 4: linea blanca y electronica\n");
		printf("opcion 5: computacion\n          opcion 6: salir\n");
		scanf("%d", &opcategoria2);
		break;
		switch (opcategoria2)
		{

		case 1:
			printf("Zapato A: %d existencias     - Zapato B: %d existencias.\n", z_1, z_2);
			printf("\n");
			printf("Zapatilla A: %d existencias. - Zapatilla B: %d existencias.\n", tilla1, tilla2);
				printf("\n");

			break;
		case 2:
			printf("Pantalon A: %d existencias  - Pantalon B: %d existencias.\n", pant_af, pant_bf);
	printf("\n");
			printf("Polera A: %d existencias.   - Polera B: %d existencias\n", pole_af, pole_bf);
	printf("\n");
			printf("Poleron A: %d existencias   - Poleron B: %d existencias.\n", poleron_af, poleron_bf);
				printf("\n");

			break;
		case 3:
			printf("Pantalon A: %d existencias - Pantalon B: %d existencias\n", pant_am, pant_bm);
				printf("\n");
			printf("Polera A: %d existencias.  - Polera B: %d existencias\n", pole_am, pole_bm);
				printf("\n");
			printf("Poleron A: %d existencias. - Poleron B: %d existencias\n", poleron_am, poleron_bm);
				printf("\n");

			break;
		case 4:
			printf("Aspiradora: %d existencias. - Microondas: %d existencias.\n", asp, micro);
				printf("\n");
			printf("Cocina: %d existencia.     - Lavadora: %d existencia.\n", cocina, lava);
				printf("\n");
			printf("Refrigerador: %d existencia.\n", refri);
				printf("\n");

			break;
		case 5:
			printf("PC de escritorio: %d existencias     -PC gamer: %d existencias\n", pc, pcpro);
				printf("\n");
			printf("Notebook: %d existencias             -Notebook gamer: %d existencias.\n", note, notepro);
	printf("\n");
			break;
		case 6:
			printf("fin del programa\n");
	printf("\n");	
			break;
		}
		break;

	/*MONTO TOTAL DE VENTAS*/
	case 3:
		/*mostrar por pantalla la cantidad
		total de lo vendido hasta el momento y el monto total de lo que queda por vender en cada categoría.
		NO MENCIONA EN LA INSTRUCCIÓN SI SE DEBE ESCOGER LA CATEGORÍA QUE SE QUIERA SABER SUS VENTAS PERO POR SIACASO
		LO HARÉ ASI*/
		int res_1 = (valor_z_1 * z_1) + (valor_z_2 * z_2) + (valor_tilla1 * tilla1) + (valor_tilla2 * tilla2);
		int venta1 = 546000-res_1;	//el valor que se le restará al total para ver cnto falta
		int res_2 = (valor_pant_af * pant_af) + (valor_pant_bf * pant_bf) + (valor_pole_af * pole_af) + (valor_pole_bf * pole_bf) + (valor_poleron_af * poleron_af) + (valor_poleron_bf * poleron_bf);
		int res_3 = (valor_pant_am * pant_am) + (valor_pant_bm * pant_bm) + (valor_pole_am * pole_am) + (valor_pole_bm * pole_bm) + (valor_poleron_am * poleron_am) + (valor_poleron_bm * poleron_bm);
		int res_4 = (valor_asp * asp) + (valor_micro * micro)+(valor_cocina*cocina)+(valor_lava*lava)+(valor_refri*refri);
		int res_5 = (valor_pc * pc) + (valor_pcpro * pcpro) + (valor_note * note) + (valor_notepro * notepro);
		
		printf("\n");
		printf("    ______________ CANTIDAD DE VENTAS TOTALES ______________    \n");
		printf("                         por categoria                          \n");
		printf("\n");
		printf("TOTAL DE LO VENDIDO HASTA EL MOMENTO...................\n");
		printf("\n");
		printf("CANTIDAD RESTANTE POR VENDER EN CADA CATEGORIA\n");
		printf("1- Zapatos y zapatillas               \n");
		printf("2- Moda mujer                         \n");
		printf("3- Moda hombre                        \n");
		printf("4- Linea blanca y electronica         \n");
		printf("5- Computacion                        \n");
		printf("\n");
		printf("___________________________________________________________    \n");
		printf("\n");
		printf("Ingrese categoría a inspeccionar: \n");
		scanf("%d", opventas );
		/*TOTALES=
		546000 ZAPATOS Y ZAPATILLAS
		672000 MODA MUJER
		623000 MODA HOMBRE
		1065000 LINEA BLANCA
		4319980 COMPUTACION*/
			switch(opventas)
			{
		
			case 1:
				
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				
				break;
				
			default:
			
			printf("\n");
			printf("Opcion no valida.");
		
				break;
			}
			
		break;

	/*SALIR*/
	case 4:
		printf("\n");
		printf("Fin del programa\n");
		break;

	default:
		printf("\n");
		printf("Opcion no valida\n");
		break;
	
	}
		
	}while(op != 4);
		}
	



