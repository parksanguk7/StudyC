/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
// 메인함수

typedef enum _TOKEN_TYPE { //토큰 종류 열거형

    TOKEN_STRING, //문자열 토큰
    TOKEN_NUMBER, // 숫자 토큰
} TOKEN_TYPE ;

typedef struct _TOKEN  //토큰 구조체
{
    TOKEN_TYPE type; //토큰 종류
    union {          //두 종류중 한종류만 저장할 것이므로 공용체로 만듬
        char* string; //문자열 포인터
        double number; //실수형 숫자
    };
    bool isArray; //현재 토큰이 배열인지 표시
} TOKEN;

#define TOKEN_COUNT 20 //토큰의 최대 개수

typedef struct _JSON {      //JSON 구조체
    TOKEN tokens[TOKEN_COUNT];  //토큰 배열 
} JSON;


char* readFile(char* filename, int* readSize) { //파일을 읽어서 내용을 변환하는 함수

    FILE* fp = fopen(filename, "rb");
    if (fp == NULL) {return NULL;} //char*이기때문에 NULL로 나감
    int size; char* buffer;
    fseek(fp, 0, SEEK_END); //파일 크기 구하기
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    buffer = calloc(1, size + 1); //파일 크기 + NULL 공간만큼 메모리를 할당하고 0으로 초기화

    if (fread(buffer, size, 1, fp) < 1) { // 파일 내용 읽기

        *readSize = 0;
         fclose(fp);
         return NULL;
    }
    *readSize = size; // 파일 크기를 넘겨줌
    fclose(fp);       // 파일 포인터 닫기
    return buffer;
}


void parseJSON(char* doc, int size, JSON* json) {
    int tokenIndex = 0;
    int pos = 0;
    if (doc[pos] != '{'){ return; }
    pos++;;

    while (pos < size) {     // 문서 크기만큼 반복
        switch (doc[pos]) { //문자의 종류에 따라 분기
        case '"':           // 문자가 " 이면 문자열
        {
            char* begin = doc + pos + 1; // 문자열 시작 위치. 맨앞의 "를 제외하기위해 +1
            char* end = strchr(begin, '"'); //
            if (end == NULL) { break; }

            int stringLength = end - begin;
            json->tokens[tokenIndex].type = TOKEN_STRING;
            json->tokens[tokenIndex].string = calloc(1, stringLength + 1);
            memcpy(json->tokens[tokenIndex].string, begin, stringLength); 
            tokenIndex++;
            pos = pos + stringLength + 1;
            break;
        }
        
        }
        pos++;
    }
}


void freeJSON(JSON* json) {
    for (int i = 0; i < TOKEN_COUNT; i++) {
        if (json->tokens[i].type == TOKEN_STRING) {
            free(json->tokens[i].string);
        }

    }
}

int main(void) {

    int size;
    char* doc = readFile("example.json", &size);
    if (doc == NULL) { return EXIT_FAILURE; }
    JSON json = { 0 };
    parseJSON(doc, size, &json);

    int i = 0;
    while (true) {
        if (json.tokens[i].string == 0) { break; }
        printf("%s : %s\n", json.tokens[i].string, json.tokens[i + 1].string);
        i += 2;
    }

    freeJSON(&json);
    free(doc);

    system("pause");
    return EXIT_SUCCESS;
}