/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,mysql연결 테스트
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - Park sang uk.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <my_global.h>
#include <Winsock2.h>
#include <mysql.h>
// 메인함수

#pragma comment(lib, "libmysql.lib")

#define MYSQLUSER "root"
#define MYSQLPASSWARD "mysql_p@ssw0rd"
#define MYSQLIP "localhost"
#define USEMYSQLDB "use shopdb"

void loadmysql(char mysqlip[], MYSQL* conn);

int main(void)

{
    // printf("MySQL info is %s\n", mysql_get_client_info());

    MYSQL* conn = mysql_init(NULL);
    MYSQL_RES*res;
    MYSQL_ROW row;
    int fields;

    loadmysql(MYSQLIP, conn);

    printf("\n");

    mysql_query(conn, USEMYSQLDB);
    mysql_query(conn, "SELECT * FROM membertbl;");
    res = mysql_store_result(conn);
    fields = mysql_num_fields(res);

    while (row = mysql_fetch_row(res)) {


        for (int i = 0; i < fields; i++) {
            printf("%s", row[i]);
            if (i < fields) { printf("\t"); }
        }
        printf("\n");
    }// 값을 뿌려주는 실제적인 로직



    mysql_query(conn, "DELETE FROM membertbl WHERE memberID = 'HAN'");
    mysql_free_result(res);
    mysql_close(conn);
    system("pause");
    return EXIT_SUCCESS;
}

void loadmysql(char mysqlip[], MYSQL* conn) {

    if (conn == NULL) {//conn이 초기화 되지 않았으면
        fprintf(stderr, "%s\n", mysql_error(conn));//에러메세지 표시
        Sleep(1000);
        exit(EXIT_FAILURE);
    }

    if (mysql_real_connect(conn, mysqlip, MYSQLUSER, MYSQLPASSWARD, NULL, 0, NULL, 0) != NULL) {
        fprintf(stdout, "접속 성공\n");
        mysql_set_character_set(conn, "euckr");
    }
    else {
        fprintf(stderr, "연결오류: %s\n", mysql_error(conn));
        getchar();

    }


}