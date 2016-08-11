/*************************************************************************
	> File Name: FDB_jcli.h
	> Author:Eval 
	> Mail:1040460587@qq.com 
	> Created Time: 2016年07月26日 星期二 14时25分06秒
 ************************************************************************/

#ifndef _FDB_JCLI_H
#define _FDB_JCLI_H

#include"FDB_jheader.h"
//#include "FDB_json.h"

class jcli
{

public:

    jcli();
    jcli(char* s);
    void Socket();
    void Connect();


    void str_cli(); 
    void my_err(const char* s, int line);


private:
    struct sockaddr_in servaddr;
    int socketfd;
    char sip[64];                            /*保存命令行传入的服务器IP地址*/
    std::string sendline;

};

#endif
