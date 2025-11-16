#pragma once
#include<string>


class Motor {
    public:
        explicit Motor(const std::string& name);
        void setPower(int power);
        int getPower(void);
    private:
        std::string name_;
        int power_;

};