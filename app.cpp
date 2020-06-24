#include <iostream>
#include <string>
#include <sqlite3.h>
#include "DatabaseConnection.hpp"

int main(int argc, char* argv[]) {

  const char *dbname;
  std::string sql;
  sql = "CREATE TABLE PEOPLE ("  \
      "ID INT PRIMARY KEY     NOT NULL," \
      "NAME           TEXT    NOT NULL);";

  DatabaseConnection dbconnection;
  dbconnection.connectToDB();
  dbconnection.runSQL(sql);
  dbconnection.closeDBConnection();
  return 0;
}
