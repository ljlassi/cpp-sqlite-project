My first C++ program. Learning C++ OOP and SQLite. Also the first time I am using SQLite specifically.

CURRENT FUNCTIONALITY:

Opens SQLite database connection (creates the database if it does not exist), creates the table if it doesn't exist, runs an SQL INSERT query followed by a SELECT query for retrieving the name(s) previously inserted to the database. Afterwards closes the database connection.

Compile with g++ (don't forget to link sqlite3.h when compiling). Compilation instruction example:

g++ app.cpp DatabaseConnection.cpp -lsqlite3
