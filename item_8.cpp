/***********************************************************************
#   > File Name   : item_8.cpp
#   > Author      : ronaldo
#   > Description : 
#   > Create Time : 2019-06-23 21:32:35
***********************************************************************/

class DBConnection {
 public:
  static DBConnection* create();
  void close();
};

class DBConnMgr {
 public:
  DBConnMgr(DBConnection *db_conn) : db_conn_(db_conn) {}
  ~DBConnMgr() {
    db_conn_->close();
  }
 private:
  DBConnection *db_conn_;
};

int main(int argc, char **argv) {
  {
    DBConnMgr db_conn_mgr(DBConnection::create());
  }

  return 0;
}
