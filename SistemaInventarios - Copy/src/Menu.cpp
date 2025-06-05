//Ferdynand Sebastian Monroy Salazar 9959 24 14049 Mayo 2025
#include "Menu.h"
#include "Bitacora.h"

Menu::Menu() {}

void Menu::mostrarOpciones(Inventario& inventario, Facturacion& factura, const string& nombreUsuario) {
    int subopcion;
    bitacora auditoria;

    do {
        system("cls");
        cout << "\n=====================================\n";
        cout << "      --- SUBMENU INVENTARIO ---\n";
        cout << "=====================================\n";
        cout << "1. Kardex\n";
        cout << "2. Reporte ventas\n";
        cout << "3. Reporte existencias\n";
        cout << "4. Reporte compras\n";
        cout << "5. Regresar al menu principal\n";
        cout << "-------------------------------------\n";
        cout << "Seleccione una opcion: ";
        cin >> subopcion;

        switch (subopcion) {
            case 1:
                auditoria.insertar(nombreUsuario, 2001, "Ver Inventario General", "Visualización del inventario");
                inventario.mostrarInventarioGeneral();
                break;
            case 2:
                auditoria.insertar(nombreUsuario, 2002, "Ver Inventario Ventas", "Visualización de inventario de ventas");
                inventario.mostrarInventarioPorTipo("ventas");
                break;
            case 3:
                auditoria.insertar(nombreUsuario, 2003, "Ver Inventario Stock", "Visualización de inventario de stock");
                inventario.mostrarInventarioPorTipo("stock");
                break;
            case 4:
                auditoria.insertar(nombreUsuario, 2004, "Ver Inventario Compras", "Visualización de inventario de compras");
                inventario.mostrarInventarioPorTipo("compras");
                break;
            case 5:
                cout << "Regresando al menú principal...\n";
                break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
        }

        system("pause");

    } while (subopcion != 5);
}

Menu::~Menu() {}
