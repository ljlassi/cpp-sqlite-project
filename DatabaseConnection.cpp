#include <iostream>
#include <string>
#include <sqlite3.h>
#include "DatabaseConnection.hpp"

DatabaseConnection::DatabaseConnection(const char* db_name) {
  this->db_name = db_name;
}

void DatabaseConnection::connectToDB() {
  this->rc = sqlite3_open(this->db_name, &this->db);
  if (this->rc) {
    std::cout << "Failed to open database connection" << sqlite3_errmsg(this->db) << std::endl;
  }
  else {
    std::cout << "Opened database connection succesfully" << sqlite3_errmsg(this->db) << std::endl;
  }
}

void DatabaseConnection::closeDBConnection() {
  this->rc = sqlite3_close(this->db);
  if (this->rc) {
    std::cout << "Closed database connection succesfully." << std::endl;
  }
  else {
    std::cout << "Possibly failed to close database connection. Error message: " << sqlite3_errmsg(this->db) << std::endl;
  }
}
