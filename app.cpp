#include <iostream>
#include <string>
#include <sqlite3.h>
#include "DatabaseConnection.hpp"

int main(int argc, char* argv[]) {

  const char *dbname;
  dbname = "test.db";

  DatabaseConnection dbconnection(dbname);
  dbconnection.connectToDB();
  dbconnection.closeDBConnection();
  return 0;
}
