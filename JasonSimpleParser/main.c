/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
// �����Լ�

typedef enum _TOKEN_TYPE { //��ū ���� ������

    TOKEN_STRING, //���ڿ� ��ū
    TOKEN_NUMBER, // ���� ��ū
} TOKEN_TYPE ;

typedef struct _TOKEN  //��ū ����ü
{
    TOKEN_TYPE type; //��ū ����
    union {          //�� ������ �������� ������ ���̹Ƿ� ����ü�� ����
        char* string; //���ڿ� ������
        double number; //�Ǽ��� ����
    };
    bool isArray; //���� ��ū�� �迭���� ǥ��
} TOKEN;

#define TOKEN_COUNT 20 //��ū�� �ִ� ����

typedef struct _JSON {      //JSON ����ü
    TOKEN tokens[TOKEN_COUNT];  //��ū �迭 
} JSON;


char* readFile(char* filename, int* readSize) { //������ �о ������ ��ȯ�ϴ� �Լ�

    FILE* fp = fopen(filename, "rb");
    if (fp == NULL) {return NULL;} //char*�̱⶧���� NULL�� ����
    int size; char* buffer;
    fseek(fp, 0, SEEK_END); //���� ũ�� ���ϱ�
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    buffer = calloc(1, size + 1); //���� ũ�� + NULL ������ŭ �޸𸮸� �Ҵ��ϰ� 0���� �ʱ�ȭ

    if (fread(buffer, size, 1, fp) < 1) { // ���� ���� �б�

        *readSize = 0;
         fclose(fp);
         return NULL;
    }
    *readSize = size; // ���� ũ�⸦ �Ѱ���
    fclose(fp);       // ���� ������ �ݱ�
    return buffer;
}


void parseJSON(char* doc, int size, JSON* json) {
    int tokenIndex = 0;
    int pos = 0;
    if (doc[pos] != '{'){ return; }
    pos++;;

    while (pos < size) {     // ���� ũ�⸸ŭ �ݺ�
        switch (doc[pos]) { //������ ������ ���� �б�
        case '"':           // ���ڰ� " �̸� ���ڿ�
        {
            char* begin = doc + pos + 1; // ���ڿ� ���� ��ġ. �Ǿ��� "�� �����ϱ����� +1
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