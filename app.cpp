#include <iostream>
#include <string>
#include <sqlite3.h>
#include "DatabaseConnection.hpp"

int main(int argc, char* argv[]) {

  std::string sql;
  sql = "CREATE TABLE PEOPLE ("  \
      "ID INTEGER PRIMARY KEY     AUTOINCREMENT," \
      "NAME           TEXT    NOT NULL);";

  DatabaseConnection dbconnection;
  dbconnection.connectToDB();
  dbconnection.runSQL(sql);
  sql = "INSERT INTO PEOPLE (NAME) VALUES ('Trump')";
  dbconnection.runSQL(sql);
  dbconnection.closeDBConnection();
  return 0;
}
