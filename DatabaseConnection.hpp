#define DB_NAME "test.db"

class DatabaseConnection {
private:
  int m_rc;
  char *m_zErrMsg;
  sqlite3 *m_db;

public:
  void connectToDB();
  void closeDBConnection();
  static int callBack(void*, int, char**, char**);
  void runSQL(const std::string& sql);
  void selectQuery(const std::string& sql);
};
