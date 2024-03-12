#include <stdio.h>
#include <postgresql/libpq-fe.h>
#include <stdlib.h>
#include <search.h>


// SURICATA_DEFAULT_LOG_DIR



int main(int argc, char *argv[])
{
    char* my_env_var = getenv("SURICATA_DEFAULT_LOG_DIR");

    if(my_env_var)
        printf("Var found: %s", my_env_var );
    else
        printf("Var not found.");                

    return 0;
}











// void do_exit(PGconn *conn) {
    
//     PQfinish(conn);
//     exit(1);
// }
//     //   - POSTGRES_PASSWORD=password
//     //   - POSTGRES_USER=username
//     //   - POSTGRES_DB=school
// int main() {
    
//     PGconn *conn = PQconnectdb("user=postgres dbname=postgres password=password123");

//     if (PQstatus(conn) == CONNECTION_BAD) {
        
//         fprintf(stderr, "Connection to database failed: %s\n",
//             PQerrorMessage(conn));
//         do_exit(conn);
//     }

//     int ver = PQserverVersion(conn);

//     printf("Server version: %d\n", ver);
    
//     PQfinish(conn);

//     return 0;
// }