#include "connection.h"

Connection::Connection()
{

}
//la connection de bd
bool Connection::createconnect()
{
   bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");//inserer le nom de la source de données ODBC
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("07248745");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}