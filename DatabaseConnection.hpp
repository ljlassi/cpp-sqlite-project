
class DatabaseConnection {
private:
  int rc;
  const char *db_name;
  char *zErrMsg;
  sqlite3 *db;

public:
  DatabaseConnection(const char*);
  void connectToDB();
  void closeDBConnection();
};
