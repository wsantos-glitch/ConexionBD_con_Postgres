#include <iostream>
#include "C:\Program Files\PostgreSQL\18\include\libpq-fe.h"

int main() {
    const char* conninfo = "host=localhost port=5432 dbname=Prueba_BD user=postgres password=12345";
    PGconn* conn = PQconnectdb(conninfo);

    if (PQstatus(conn) != CONNECTION_OK) {
        std::cerr << "Error de conexion: " << PQerrorMessage(conn) << std::endl;
    }
    else {
        std::cout << "¡Conectado exitosamente desde Visual Studio!" << std::endl;
    }

    PQfinish(conn);
    system("pause"); // Para que no se cierre la consola
    return 0;
}