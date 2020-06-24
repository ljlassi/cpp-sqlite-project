#include <iostream>
#include <sqlite3.h>

int main(int argc, char* argv[]) {
  sqlite3 *db;
  char *zErrMsg = 0;
  int rc;

  rc = sqlite3_open("test.db", &db);

  if (rc) {
    std::cout <<"DB open error" << sqlite3_errmsg(db) << std::endl;
    return(0);
  }
  else {
    std::cout <<"Opened database succesfully " << std::endl;
  }
  sqlite3_close(db);
}
