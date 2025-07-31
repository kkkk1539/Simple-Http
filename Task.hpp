#pragma once 

#include <iostream>
#include "Protocol.hpp"

class Task{
    private:
        int sock;
        CallBack handler; 
    public:
        Task()
        {}
        Task(int _sock):sock(_sock)
        {}
        void ProcessOn()
        {
            handler(sock);
        }
        ~Task()
        {}
};
