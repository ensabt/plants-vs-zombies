#ifndef PLANTS_H
#define PLANTS_H


#include<QMainWindow>
#include<QTimer>
class plants
{
    int Health;
    int Firing_Rate;
    int Attack_power;

public:
    plants(int H, int F, int A): Health(H),Firing_Rate(F),Attack_power(A){}
    void set_Health(int H );
    void set_Firing_Rate(int F);
    void set_Attack_power(int A);
    int get_Health();
    int get_Firing_Rate();
    int get_Attack_power();
};

#endif // PLANTS_H
